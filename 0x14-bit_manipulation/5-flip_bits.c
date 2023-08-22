{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x14-bit_manipulation":{"items":[{"name":"0-binary_to_uint.c","path":"0x14-bit_manipulation/0-binary_to_uint.c","contentType":"file"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation/0x14-bit_manipulation","contentType":"file"},{"name":"1-print_binary.c","path":"0x14-bit_manipulation/1-print_binary.c","contentType":"file"},{"name":"100-get_endianness.c","path":"0x14-bit_manipulation/100-get_endianness.c","contentType":"file"},{"name":"101-password","path":"0x14-bit_manipulation/101-password","contentType":"file"},{"name":"2-get_bit.c","path":"0x14-bit_manipulation/2-get_bit.c","contentType":"file"},{"name":"3-set_bit.c","path":"0x14-bit_manipulation/3-set_bit.c","contentType":"file"},{"name":"4-clear_bit.c","path":"0x14-bit_manipulation/4-clear_bit.c","contentType":"file"},{"name":"5-flip_bits.c","path":"0x14-bit_manipulation/5-flip_bits.c","contentType":"file"},{"name":"README.md","path":"0x14-bit_manipulation/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x14-bit_manipulation/_putchar.c","contentType":"file"},{"name":"main.h","path":"0x14-bit_manipulation/main.h","contentType":"file"}],"totalCount":12},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0-preprocessor","path":"0-preprocessor","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":25}},"fileTreeProcessingTime":7.333615,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":534194050,"defaultBranch":"master","name":"alx-low_level_programming-old","ownerLogin":"samibirhanu1","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2022-09-08T12:07:29.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/111054348?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1670951418.5422761","canEdit":false,"refType":"branch","currentOid":"651a8c502264020af27d45ef75cf2ac03b3dbbcb"},"path":"0x14-bit_manipulation/5-flip_bits.c","currentUser":null,"blob":{"rawLines":["#include \"main.h\"","","/**"," * flip_bits - Counts the number of bits needed to be"," *             flipped to get from one number to another."," * @n: The number."," * @m: The number to flip n to."," *"," * Return: The necessary number of bits to flip to get from n to m."," */","","unsigned int flip_bits(unsigned long int n, unsigned long int m)","{","\tunsigned long int xor = n ^ m, bits = 0;","","\twhile (xor > 0)","\t{","\t\tbits += (xor & 1);","\t\txor >>= 1;","\t}","","\treturn (bits);","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":17,"cssClass":"pl-s"}],[],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":53,"cssClass":"pl-c"}],[{"start":0,"end":57,"cssClass":"pl-c"}],[{"start":0,"end":18,"cssClass":"pl-c"}],[{"start":0,"end":31,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":67,"cssClass":"pl-c"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[],[{"start":0,"end":12,"cssClass":"pl-smi"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":22,"cssClass":"pl-en"},{"start":23,"end":40,"cssClass":"pl-smi"},{"start":37,"end":40,"cssClass":"pl-smi"},{"start":41,"end":42,"cssClass":"pl-s1"},{"start":44,"end":61,"cssClass":"pl-smi"},{"start":58,"end":61,"cssClass":"pl-smi"},{"start":62,"end":63,"cssClass":"pl-s1"}],[],[{"start":1,"end":18,"cssClass":"pl-smi"},{"start":15,"end":18,"cssClass":"pl-smi"},{"start":19,"end":22,"cssClass":"pl-s1"},{"start":23,"end":24,"cssClass":"pl-c1"},{"start":25,"end":26,"cssClass":"pl-s1"},{"start":29,"end":30,"cssClass":"pl-s1"},{"start":32,"end":36,"cssClass":"pl-s1"},{"start":37,"end":38,"cssClass":"pl-c1"},{"start":39,"end":40,"cssClass":"pl-c1"}],[],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":11,"cssClass":"pl-s1"},{"start":12,"end":13,"cssClass":"pl-c1"},{"start":14,"end":15,"cssClass":"pl-c1"}],[],[{"start":2,"end":6,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":11,"end":14,"cssClass":"pl-s1"},{"start":15,"end":16,"cssClass":"pl-c1"},{"start":17,"end":18,"cssClass":"pl-c1"}],[{"start":2,"end":5,"cssClass":"pl-s1"},{"start":10,"end":11,"cssClass":"pl-c1"}],[],[],[{"start":1,"end":7,"cssClass":"pl-k"},{"start":9,"end":13,"cssClass":"pl-s1"}],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/samibirhanu1/alx-low_level_programming-old/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/samibirhanu1/alx-low_level_programming-old/security/dependabot","repoSecurityAndAnalysisPath":"/samibirhanu1/alx-low_level_programming-old/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"5-flip_bits.c","displayUrl":"https://github.com/samibirhanu1/alx-low_level_programming-old/blob/master/0x14-bit_manipulation/5-flip_bits.c?raw=true","headerInfo":{"blobSize":"448 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"253a332","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fsamibirhanu1%2Falx-low_level_programming-old%2Fblob%2Fmaster%2F0x14-bit_manipulation%2F5-flip_bits.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"23","truncatedSloc":"19"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/samibirhanu1/alx-low_level_programming-old/discussions/new","newIssuePath":"/samibirhanu1/alx-low_level_programming-old/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/samibirhanu1/alx-low_level_programming-old/blob/master/0x14-bit_manipulation/5-flip_bits.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/samibirhanu1/alx-low_level_programming-old/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"samibirhanu1","repoName":"alx-low_level_programming-old","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"flip_bits","kind":"function","identStart":275,"identEnd":284,"extentStart":275,"extentEnd":326,"fullyQualifiedName":"flip_bits","identUtf16":{"start":{"lineNumber":11,"utf16Col":13},"end":{"lineNumber":11,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":11,"utf16Col":13},"end":{"lineNumber":11,"utf16Col":64}}}]}},"copilotInfo":null,"csrf_tokens":{"/samibirhanu1/alx-low_level_programming-old/branches":{"post":"F0YiMD5KY0b_GF7uRjEk23dcRFyeHfDdjGJ8FT7knCdWISF3jcY3fs8AHA07VyUTRSimWh5ueoehS0wYmIvOEw"},"/repos/preferences":{"post":"Lum2nKznYGd0n-neqG-geQt1U3Q01tEFM7PZs_Ud7QKu0KFvi6Cr1tWWI1yEFBlG2-fm3sTRFfEEi16LMTwqHQ"}}},"title":"alx-low_level_programming-old/0x14-bit_manipulation/5-flip_bits.c at master · samibirhanu1/alx-low_level_programming-old"}