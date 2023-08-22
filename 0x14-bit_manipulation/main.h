{"payload":{"allShortcutsEnabled":false,"fileTree":{"0x14-bit_manipulation":{"items":[{"name":"0-binary_to_uint.c","path":"0x14-bit_manipulation/0-binary_to_uint.c","contentType":"file"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation/0x14-bit_manipulation","contentType":"file"},{"name":"1-print_binary.c","path":"0x14-bit_manipulation/1-print_binary.c","contentType":"file"},{"name":"100-get_endianness.c","path":"0x14-bit_manipulation/100-get_endianness.c","contentType":"file"},{"name":"101-password","path":"0x14-bit_manipulation/101-password","contentType":"file"},{"name":"2-get_bit.c","path":"0x14-bit_manipulation/2-get_bit.c","contentType":"file"},{"name":"3-set_bit.c","path":"0x14-bit_manipulation/3-set_bit.c","contentType":"file"},{"name":"4-clear_bit.c","path":"0x14-bit_manipulation/4-clear_bit.c","contentType":"file"},{"name":"5-flip_bits.c","path":"0x14-bit_manipulation/5-flip_bits.c","contentType":"file"},{"name":"README.md","path":"0x14-bit_manipulation/README.md","contentType":"file"},{"name":"_putchar.c","path":"0x14-bit_manipulation/_putchar.c","contentType":"file"},{"name":"main.h","path":"0x14-bit_manipulation/main.h","contentType":"file"}],"totalCount":12},"":{"items":[{"name":"0x00-hello_world","path":"0x00-hello_world","contentType":"directory"},{"name":"0x01-variables_if_else_while","path":"0x01-variables_if_else_while","contentType":"directory"},{"name":"0x02-functions_nested_loops","path":"0x02-functions_nested_loops","contentType":"directory"},{"name":"0x03-debugging","path":"0x03-debugging","contentType":"directory"},{"name":"0x04-more_functions_nested_loops","path":"0x04-more_functions_nested_loops","contentType":"directory"},{"name":"0x05-pointers_arrays_strings","path":"0x05-pointers_arrays_strings","contentType":"directory"},{"name":"0x06-pointers_arrays_strings","path":"0x06-pointers_arrays_strings","contentType":"directory"},{"name":"0x07-pointers_arrays_strings","path":"0x07-pointers_arrays_strings","contentType":"directory"},{"name":"0x08-recursion","path":"0x08-recursion","contentType":"directory"},{"name":"0x0A-argc_argv","path":"0x0A-argc_argv","contentType":"directory"},{"name":"0x0B-malloc_free","path":"0x0B-malloc_free","contentType":"directory"},{"name":"0x0C-more_malloc_free","path":"0x0C-more_malloc_free","contentType":"directory"},{"name":"0x0D-preprocessor","path":"0x0D-preprocessor","contentType":"directory"},{"name":"0x0E-structures_typedef","path":"0x0E-structures_typedef","contentType":"directory"},{"name":"0x0F-function_pointers","path":"0x0F-function_pointers","contentType":"directory"},{"name":"0x10-variadic_functions","path":"0x10-variadic_functions","contentType":"directory"},{"name":"0x12-singly_linked_lists","path":"0x12-singly_linked_lists","contentType":"directory"},{"name":"0x13-more_singly_linked_lists","path":"0x13-more_singly_linked_lists","contentType":"directory"},{"name":"0x14-bit_manipulation","path":"0x14-bit_manipulation","contentType":"directory"},{"name":"0x15-file_io","path":"0x15-file_io","contentType":"directory"},{"name":"0x17-doubly_linked_lists","path":"0x17-doubly_linked_lists","contentType":"directory"},{"name":"0x18-dynamic_libraries","path":"0x18-dynamic_libraries","contentType":"directory"},{"name":"0x1A-hash_tables","path":"0x1A-hash_tables","contentType":"directory"},{"name":"0-preprocessor","path":"0-preprocessor","contentType":"file"},{"name":"README.md","path":"README.md","contentType":"file"}],"totalCount":25}},"fileTreeProcessingTime":10.834479,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":534194050,"defaultBranch":"master","name":"alx-low_level_programming-old","ownerLogin":"samibirhanu1","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2022-09-08T12:07:29.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/111054348?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"master","listCacheKey":"v0:1670951418.5422761","canEdit":false,"refType":"branch","currentOid":"651a8c502264020af27d45ef75cf2ac03b3dbbcb"},"path":"0x14-bit_manipulation/main.h","currentUser":null,"blob":{"rawLines":["#ifndef MAIN_H","#define MAIN_H","","int _putchar(char c);","unsigned int binary_to_uint(const char *b);","void print_binary(unsigned long int n);","int get_bit(unsigned long int n, unsigned int index);","int set_bit(unsigned long int *n, unsigned int index);","int clear_bit(unsigned long int *n, unsigned int index);","unsigned int flip_bits(unsigned long int n, unsigned long int m);","int get_endianness(void);","","#endif /* MAIN_H */"],"stylingDirectives":[[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-c1"}],[{"start":0,"end":7,"cssClass":"pl-k"},{"start":8,"end":14,"cssClass":"pl-c1"}],[],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":12,"cssClass":"pl-en"},{"start":13,"end":17,"cssClass":"pl-smi"},{"start":18,"end":19,"cssClass":"pl-s1"}],[{"start":0,"end":12,"cssClass":"pl-smi"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":27,"cssClass":"pl-en"},{"start":28,"end":33,"cssClass":"pl-k"},{"start":34,"end":38,"cssClass":"pl-smi"},{"start":39,"end":40,"cssClass":"pl-c1"},{"start":40,"end":41,"cssClass":"pl-s1"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":17,"cssClass":"pl-en"},{"start":18,"end":35,"cssClass":"pl-smi"},{"start":32,"end":35,"cssClass":"pl-smi"},{"start":36,"end":37,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":11,"cssClass":"pl-en"},{"start":12,"end":29,"cssClass":"pl-smi"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-s1"},{"start":33,"end":45,"cssClass":"pl-smi"},{"start":42,"end":45,"cssClass":"pl-smi"},{"start":46,"end":51,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":11,"cssClass":"pl-en"},{"start":12,"end":29,"cssClass":"pl-smi"},{"start":26,"end":29,"cssClass":"pl-smi"},{"start":30,"end":31,"cssClass":"pl-c1"},{"start":31,"end":32,"cssClass":"pl-s1"},{"start":34,"end":46,"cssClass":"pl-smi"},{"start":43,"end":46,"cssClass":"pl-smi"},{"start":47,"end":52,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":13,"cssClass":"pl-en"},{"start":14,"end":31,"cssClass":"pl-smi"},{"start":28,"end":31,"cssClass":"pl-smi"},{"start":32,"end":33,"cssClass":"pl-c1"},{"start":33,"end":34,"cssClass":"pl-s1"},{"start":36,"end":48,"cssClass":"pl-smi"},{"start":45,"end":48,"cssClass":"pl-smi"},{"start":49,"end":54,"cssClass":"pl-s1"}],[{"start":0,"end":12,"cssClass":"pl-smi"},{"start":9,"end":12,"cssClass":"pl-smi"},{"start":13,"end":22,"cssClass":"pl-en"},{"start":23,"end":40,"cssClass":"pl-smi"},{"start":37,"end":40,"cssClass":"pl-smi"},{"start":41,"end":42,"cssClass":"pl-s1"},{"start":44,"end":61,"cssClass":"pl-smi"},{"start":58,"end":61,"cssClass":"pl-smi"},{"start":62,"end":63,"cssClass":"pl-s1"}],[{"start":0,"end":3,"cssClass":"pl-smi"},{"start":4,"end":18,"cssClass":"pl-en"},{"start":19,"end":23,"cssClass":"pl-smi"}],[],[{"start":0,"end":6,"cssClass":"pl-k"},{"start":7,"end":19,"cssClass":"pl-c"}]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/samibirhanu1/alx-low_level_programming-old/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/samibirhanu1/alx-low_level_programming-old/security/dependabot","repoSecurityAndAnalysisPath":"/samibirhanu1/alx-low_level_programming-old/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"main.h","displayUrl":"https://github.com/samibirhanu1/alx-low_level_programming-old/blob/master/0x14-bit_manipulation/main.h?raw=true","headerInfo":{"blobSize":"416 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":"https://desktop.github.com","gitLfsPath":null,"onBranch":true,"shortPath":"8ecfa92","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2Fsamibirhanu1%2Falx-low_level_programming-old%2Fblob%2Fmaster%2F0x14-bit_manipulation%2Fmain.h","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"13","truncatedSloc":"11"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/samibirhanu1/alx-low_level_programming-old/discussions/new","newIssuePath":"/samibirhanu1/alx-low_level_programming-old/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/samibirhanu1/alx-low_level_programming-old/blob/master/0x14-bit_manipulation/main.h","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/samibirhanu1/alx-low_level_programming-old/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"samibirhanu1","repoName":"alx-low_level_programming-old","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"MAIN_H","kind":"SYMBOL_KIND_UNKNOWN","identStart":23,"identEnd":29,"extentStart":15,"extentEnd":31,"fullyQualifiedName":"MAIN_H","identUtf16":{"start":{"lineNumber":1,"utf16Col":8},"end":{"lineNumber":1,"utf16Col":14}},"extentUtf16":{"start":{"lineNumber":1,"utf16Col":0},"end":{"lineNumber":3,"utf16Col":0}}},{"name":"_putchar","kind":"function","identStart":35,"identEnd":43,"extentStart":35,"extentEnd":51,"fullyQualifiedName":"_putchar","identUtf16":{"start":{"lineNumber":3,"utf16Col":4},"end":{"lineNumber":3,"utf16Col":12}},"extentUtf16":{"start":{"lineNumber":3,"utf16Col":4},"end":{"lineNumber":3,"utf16Col":20}}},{"name":"binary_to_uint","kind":"function","identStart":66,"identEnd":80,"extentStart":66,"extentEnd":95,"fullyQualifiedName":"binary_to_uint","identUtf16":{"start":{"lineNumber":4,"utf16Col":13},"end":{"lineNumber":4,"utf16Col":27}},"extentUtf16":{"start":{"lineNumber":4,"utf16Col":13},"end":{"lineNumber":4,"utf16Col":42}}},{"name":"print_binary","kind":"function","identStart":102,"identEnd":114,"extentStart":102,"extentEnd":135,"fullyQualifiedName":"print_binary","identUtf16":{"start":{"lineNumber":5,"utf16Col":5},"end":{"lineNumber":5,"utf16Col":17}},"extentUtf16":{"start":{"lineNumber":5,"utf16Col":5},"end":{"lineNumber":5,"utf16Col":38}}},{"name":"get_bit","kind":"function","identStart":141,"identEnd":148,"extentStart":141,"extentEnd":189,"fullyQualifiedName":"get_bit","identUtf16":{"start":{"lineNumber":6,"utf16Col":4},"end":{"lineNumber":6,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":6,"utf16Col":4},"end":{"lineNumber":6,"utf16Col":52}}},{"name":"set_bit","kind":"function","identStart":195,"identEnd":202,"extentStart":195,"extentEnd":244,"fullyQualifiedName":"set_bit","identUtf16":{"start":{"lineNumber":7,"utf16Col":4},"end":{"lineNumber":7,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":4},"end":{"lineNumber":7,"utf16Col":53}}},{"name":"clear_bit","kind":"function","identStart":250,"identEnd":259,"extentStart":250,"extentEnd":301,"fullyQualifiedName":"clear_bit","identUtf16":{"start":{"lineNumber":8,"utf16Col":4},"end":{"lineNumber":8,"utf16Col":13}},"extentUtf16":{"start":{"lineNumber":8,"utf16Col":4},"end":{"lineNumber":8,"utf16Col":55}}},{"name":"flip_bits","kind":"function","identStart":316,"identEnd":325,"extentStart":316,"extentEnd":367,"fullyQualifiedName":"flip_bits","identUtf16":{"start":{"lineNumber":9,"utf16Col":13},"end":{"lineNumber":9,"utf16Col":22}},"extentUtf16":{"start":{"lineNumber":9,"utf16Col":13},"end":{"lineNumber":9,"utf16Col":64}}},{"name":"get_endianness","kind":"function","identStart":373,"identEnd":387,"extentStart":373,"extentEnd":393,"fullyQualifiedName":"get_endianness","identUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":18}},"extentUtf16":{"start":{"lineNumber":10,"utf16Col":4},"end":{"lineNumber":10,"utf16Col":24}}}]}},"copilotInfo":null,"csrf_tokens":{"/samibirhanu1/alx-low_level_programming-old/branches":{"post":"aN4_hojJcyX_WFrcD6XlW3SH2r9zjKYI5rk5r55D1ZzB8MVqUgEeSXcq3B4JeUpPrMaohfplqoPPzzhMSoIf2Q"},"/repos/preferences":{"post":"InVU_Jei9bMPwYCybaBdOEsbOjFrM1zS-up6iMQE4s6rWP5kokY53xgsnthFGhlgVZq0fRMyDOv5qc1TUvFgPw"}}},"title":"alx-low_level_programming-old/0x14-bit_manipulation/main.h at master · samibirhanu1/alx-low_level_programming-old"}