[33mcommit cebe4694dad03b915b02a0c42e86b43b6551f083[m[33m ([m[1;36mHEAD -> [m[1;32mmaster[m[33m)[m
Author: Gomez Hidalgo, Juan <juan.gomez.hidalgo@accenture.com>
Date:   Thu Mar 25 00:42:51 2021 +0100

    Initial commit of DreamHouse metadata

[1mdiff --git a/.eslintignore b/.eslintignore[m
[1mnew file mode 100644[m
[1mindex 0000000..4b69683[m
[1m--- /dev/null[m
[1m+++ b/.eslintignore[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m**/lwc/**/*.css[m
[32m+[m[32m**/lwc/**/*.html[m
[32m+[m[32m**/lwc/**/*.json[m
[32m+[m[32m**/lwc/**/*.svg[m
[32m+[m[32m**/lwc/**/*.xml[m
[32m+[m[32m**/aura/**/*.auradoc[m
[32m+[m[32m**/aura/**/*.cmp[m
[32m+[m[32m**/aura/**/*.css[m
[32m+[m[32m**/aura/**/*.design[m
[32m+[m[32m**/aura/**/*.evt[m
[32m+[m[32m**/aura/**/*.json[m
[32m+[m[32m**/aura/**/*.svg[m
[32m+[m[32m**/aura/**/*.tokens[m
[32m+[m[32m**/aura/**/*.xml[m
[32m+[m[32m.sfdx[m
\ No newline at end of file[m
[1mdiff --git a/.forceignore b/.forceignore[m
[1mnew file mode 100644[m
[1mindex 0000000..88eb1bf[m
[1m--- /dev/null[m
[1m+++ b/.forceignore[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m# List files or directories below to ignore them when running force:source:push, force:source:pull, and force:source:status[m
[32m+[m[32m# More information: https://developer.salesforce.com/docs/atlas.en-us.sfdx_dev.meta/sfdx_dev/sfdx_dev_exclude_source.htm[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32mpackage.xml[m
[32m+[m[32m**profile[m
[32m+[m[32m# LWC configuration files[m
[32m+[m[32m**/jsconfig.json[m
[32m+[m[32m**/.eslintrc.json[m
[32m+[m
[32m+[m[32m# LWC Jest[m
[32m+[m[32m**/__tests__/**[m
\ No newline at end of file[m
[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..2512c14[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,42 @@[m
[32m+[m[32m# This file is used for Git repositories to specify intentionally untracked files that Git should ignore.[m[41m [m
[32m+[m[32m# If you are not using git, you can delete this file. For more information see: https://git-scm.com/docs/gitignore[m
[32m+[m[32m# For useful gitignore templates see: https://github.com/github/gitignore[m
[32m+[m
[32m+[m[32m# Salesforce cache[m
[32m+[m[32m.sfdx/[m
[32m+[m[32m.localdevserver/[m
[32m+[m
[32m+[m[32m# LWC VSCode autocomplete[m
[32m+[m[32m**/lwc/jsconfig.json[m
[32m+[m
[32m+[m[32m# LWC Jest coverage reports[m
[32m+[m[32mcoverage/[m
[32m+[m
[32m+[m[32m# SOQL Query Results[m
[32m+[m[32m**/scripts/soql/query-results[m
[32m+[m
[32m+[m[32m# Logs[m
[32m+[m[32mlogs[m
[32m+[m[32m*.log[m
[32m+[m[32mnpm-debug.log*[m
[32m+[m[32myarn-debug.log*[m
[32m+[m[32myarn-error.log*[m
[32m+[m
[32m+[m[32m# Dependency directories[m
[32m+[m[32mnode_modules/[m
[32m+[m
[32m+[m[32m# Eslint cache[m
[32m+[m[32m.eslintcache[m
[32m+[m
[32m+[m[32m# MacOS system files[m
[32m+[m[32m.DS_Store[m
[32m+[m
[32m+[m[32m# Windows system files[m
[32m+[m[32mThumbs.db[m
[32m+[m[32mehthumbs.db[m
[32m+[m[32m[Dd]esktop.ini[m
[32m+[m[32m$RECYCLE.BIN/[m
[32m+[m
[32m+[m[32m.sfdx[m
[32m+[m[32m.vscode[m
[32m+[m[32m.DS_Store[m
\ No newline at end of file[m
[1mdiff --git a/.prettierignore b/.prettierignore[m
[1mnew file mode 100644[m
[1mindex 0000000..f3720b2[m
[1m--- /dev/null[m
[1m+++ b/.prettierignore[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m# List files or directories below to ignore them when running prettier[m
[32m+[m[32m# More information: https://prettier.io/docs/en/ignore.html[m
[32m+[m[32m#[m
[32m+[m
[32m+[m[32m**/staticresources/**[m
[32m+[m[32m.localdevserver[m
[32m+[m[32m.sfdx[m
[32m+[m[32m.vscode[m
[32m+[m
[32m+[m[32mcoverage/[m
\ No newline at end of file[m
[1mdiff --git a/.prettierrc b/.prettierrc[m
[1mnew file mode 100644[m
[1mindex 0000000..15683b6[m
[1m--- /dev/null[m
[1m+++ b/.prettierrc[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "trailingComma": "none",[m
[32m+[m[32m  "overrides": [[m
[32m+[m[32m    {[m
[32m+[m[32m      "files": "**/lwc/**/*.html",[m
[32m+[m[32m      "options": { "parser": "lwc" }[m
[32m+[m[32m    },[m
[32m+[m[32m    {[m
[32m+[m[32m      "files": "*.{cmp,page,component}",[m
[32m+[m[32m      "options": { "parser": "html" }[m
[32m+[m[32m    }[m
[32m+[m[32m  ][m
[32m+[m[32m}[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..afcda4a[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,18 @@[m
[32m+[m[32m# Salesforce DX Project: Next Steps[m
[32m+[m
[32m+[m[32mNow that you’ve created a Salesforce DX project, what’s next? Here are some documentation resources to get you started.[m
[32m+[m
[32m+[m[32m## How Do You Plan to Deploy Your Changes?[m
[32m+[m
[32m+[m[32mDo you want to deploy a set of changes, or create a self-contained application? Choose a [development model](https://developer.salesforce.com/tools/vscode/en/user-guide/development-models).[m
[32m+[m
[32m+[m[32m## Configure Your Salesforce DX Project[m
[32m+[m
[32m+[m[32mThe `sfdx-project.json` file contains useful configuration information for your project. See [Salesforce DX Project Configuration](https://developer.salesforce.com/docs/atlas.en-us.sfdx_dev.meta/sfdx_dev/sfdx_dev_ws_config.htm) in the _Salesforce DX Developer Guide_ for details about this file.[m
[32m+[m
[32m+[m[32m## Read All About It[m
[32m+[m
[32m+[m[32m- [Salesforce Extensions Documentation](https://developer.salesforce.com/tools/vscode/)[m
[32m+[m[32m- [Salesforce CLI Setup Guide](https://developer.salesforce.com/docs/atlas.en-us.sfdx_setup.meta/sfdx_setup/sfdx_setup_intro.htm)[m
[32m+[m[32m- [Salesforce DX Developer Guide](https://developer.salesforce.com/docs/atlas.en-us.sfdx_dev.meta/sfdx_dev/sfdx_dev_intro.htm)[m
[32m+[m[32m- [Salesforce CLI Command Reference](https://developer.salesforce.com/docs/atlas.en-us.sfdx_cli_reference.meta/sfdx_cli_reference/cli_reference.htm)[m
[1mdiff --git a/assets/data/Broker__c-Property__c.json b/assets/data/Broker__c-Property__c.json[m
[1mnew file mode 100644[m
[1mindex 0000000..e6cdf71[m
[1m--- /dev/null[m
[1m+++ b/assets/data/Broker__c-Property__c.json[m
[36m@@ -0,0 +1,420 @@[m
[32m+[m[32m{[m
[32m+[m[32m    "records": [[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef1"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Caroline Kingsley",[m
[32m+[m[32m            "Email__c": "caroline@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/caroline_kingsley.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef1"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "121 Harborwalk Drive",[m
[32m+[m[32m                        "Assessed_Value__c": 306000,[m
[32m+[m[32m                        "Baths__c": 3,[m
[32m+[m[32m                        "Beds__c": 3,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-10",[m
[32m+[m[32m                        "Description__c": "Anim iPhone eiusmod non normcore, ugh officia. Blog ullamco stumptown, microdosing put a bird on it nihil farm-to-table pour-over squid chillwave seitan activated charcoal. Offal nesciunt lyft odio banjo. Pabst assumenda biodiesel, iPhone ethical veniam paleo in kale chips art party vaporware butcher.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.049327,[m
[32m+[m[32m                        "Location__Latitude__s": 42.35695,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house09.jpg",[m
[32m+[m[32m                        "Price__c": 450000,[m
[32m+[m[32m                        "Name": "121 Harborwalk Drive",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Modern",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house09sq.jpg",[m
[32m+[m[32m                        "Title__c": "Seaport District Retreat",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    },[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef2"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "95 Gloucester St",[m
[32m+[m[32m                        "Assessed_Value__c": 593400,[m
[32m+[m[32m                        "Baths__c": 3,[m
[32m+[m[32m                        "Beds__c": 3,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-14",[m
[32m+[m[32m                        "Description__c": "Aesthetic neutra raclette retro tofu, laborum hexagon YOLO 3 wolf moon banh mi man braid slow-carb single-origin coffee kale chips. Mustache XOXO authentic 90's keffiyeh, jianbing kinfolk chillwave duis small batch prism.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.084407,[m
[32m+[m[32m                        "Location__Latitude__s": 42.349693,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house11.jpg",[m
[32m+[m[32m                        "Price__c": 690000,[m
[32m+[m[32m                        "Name": "95 Gloucester St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Contemporary",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house11sq.jpg",[m
[32m+[m[32m                        "Title__c": "Architectural Details",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    },[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef3"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "18 Henry St",[m
[32m+[m[32m                        "Assessed_Value__c": 789750,[m
[32m+[m[32m                        "Baths__c": 3,[m
[32m+[m[32m                        "Beds__c": 4,[m
[32m+[m[32m                        "City__c": "Cambridge",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-17",[m
[32m+[m[32m                        "Description__c": "Bacon ipsum dolor amet ribeye meatball ham hock swine sausage frankfurter tail cow ball tip pork chop leberkas brisket turkey beef. Landjaeger boudin beef ribs leberkas. Prosciutto beef ribs sirloin, capicola short ribs frankfurter bacon. Picanha filet mignon boudin, bacon jerky meatball turkey.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.11095,[m
[32m+[m[32m                        "Location__Latitude__s": 42.35663,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house01.jpg",[m
[32m+[m[32m                        "Price__c": 975000,[m
[32m+[m[32m                        "Name": "18 Henry St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Colonial",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house01sq.jpg",[m
[32m+[m[32m                        "Title__c": "Stunning Colonial",[m
[32m+[m[32m                        "Zip__c": "01742"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef2"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Michael Jones",[m
[32m+[m[32m            "Email__c": "michael@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/michael_jones.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef4"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "503 Park Drive",[m
[32m+[m[32m                        "Assessed_Value__c": 513500,[m
[32m+[m[32m                        "Baths__c": 2,[m
[32m+[m[32m                        "Beds__c": 2,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-10",[m
[32m+[m[32m                        "Description__c": "Cray kogi small batch edison bulb. Ugh you probably haven't heard of them cold-pressed art party. Nostrud you probably haven't heard of them waistcoat poke cardigan.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.105475,[m
[32m+[m[32m                        "Location__Latitude__s": 42.3474,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house08.jpg",[m
[32m+[m[32m                        "Price__c": 650000,[m
[32m+[m[32m                        "Name": "503 Park Drive",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Modern",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house08sq.jpg",[m
[32m+[m[32m                        "Title__c": "City Living",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    },[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef5"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "145 Commonwealth Ave",[m
[32m+[m[32m                        "Assessed_Value__c": 633750,[m
[32m+[m[32m                        "Baths__c": 3,[m
[32m+[m[32m                        "Beds__c": 4,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-07",[m
[32m+[m[32m                        "Description__c": "Tunguska event two ghostly white figures in coveralls and helmets are soflty dancing vanquish the impossible kindling the energy hidden in matter brain is the seed of intelligence. A very small stage in a vast cosmic arena rich in mystery hearts of the stars a mote of dust suspended in a sunbeam.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.075311,[m
[32m+[m[32m                        "Location__Latitude__s": 42.352466,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house12.jpg",[m
[32m+[m[32m                        "Price__c": 845000,[m
[32m+[m[32m                        "Name": "145 Commonwealth Ave",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Victorian",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house12sq.jpg",[m
[32m+[m[32m                        "Title__c": "Contemporary Luxury",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    },[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef6"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "24 Pearl St",[m
[32m+[m[32m                        "Assessed_Value__c": 1008000,[m
[32m+[m[32m                        "Baths__c": 4,[m
[32m+[m[32m                        "Beds__c": 5,[m
[32m+[m[32m                        "City__c": "Cambridge",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-06",[m
[32m+[m[32m                        "Description__c": "Carouser Blimey main sheet lad bounty brig piracy aft sloop log. Run a rig furl Nelsons folly measured fer yer chains ho chandler hulk prow mutiny wench. Bilge water wherry lanyard piracy port rum cackle fruit topgallant trysail bilge.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.10869,[m
[32m+[m[32m                        "Location__Latitude__s": 42.359103,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house02.jpg",[m
[32m+[m[32m                        "Price__c": 1200000,[m
[32m+[m[32m                        "Name": "24 Pearl St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Victorian",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house02sq.jpg",[m
[32m+[m[32m                        "Title__c": "Ultimate Sophistication",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef3"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Jonathan Bradley",[m
[32m+[m[32m            "Email__c": "jonathan@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/jonathan_bradley.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef7"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "61 West Cedar St",[m
[32m+[m[32m                        "Assessed_Value__c": 602250,[m
[32m+[m[32m                        "Baths__c": 4,[m
[32m+[m[32m                        "Beds__c": 5,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-19",[m
[32m+[m[32m                        "Description__c": "Pulling teeth this proposal is a win-win situation which will cause a stellar paradigm shift, and produce a multi-fold increase in deliverables for turd polishing, and first-order optimal strategies at the end of the day UI great plan! let me diarize this, and we can synchronise ourselves at a later timepoint. When does this sunset? future-proof.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.070061,[m
[32m+[m[32m                        "Location__Latitude__s": 42.359986,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house03.jpg",[m
[32m+[m[32m                        "Price__c": 825000,[m
[32m+[m[32m                        "Name": "61 West Cedar St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Modern",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house03sq.jpg",[m
[32m+[m[32m                        "Title__c": "Modern City Living",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef4"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Jennifer Wu",[m
[32m+[m[32m            "Email__c": "jen@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/jennifer_wu.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef8"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "32 Prince st",[m
[32m+[m[32m                        "Assessed_Value__c": 818400,[m
[32m+[m[32m                        "Baths__c": 4,[m
[32m+[m[32m                        "Beds__c": 5,[m
[32m+[m[32m                        "City__c": "Cambridge",[m
[32m+[m[32m                        "Date_Listed__c": "2021-03-22",[m
[32m+[m[32m                        "Description__c": "Distillery meditation before they sold out umami. Typewriter craft beer actually, raw denim gluten-free roof party before they sold out quinoa bitters dreamcatcher tousled ennui vice small batch sartorial.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.110448,[m
[32m+[m[32m                        "Location__Latitude__s": 42.360642,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house04.jpg",[m
[32m+[m[32m                        "Price__c": 930000,[m
[32m+[m[32m                        "Name": "32 Prince st",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Contemporary",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house04sq.jpg",[m
[32m+[m[32m                        "Title__c": "Live in the Trees",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef5"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Olivia Green",[m
[32m+[m[32m            "Email__c": "olivia@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/olivia_green.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef9"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "211 Charles Street",[m
[32m+[m[32m                        "Assessed_Value__c": 722500,[m
[32m+[m[32m                        "Baths__c": 2,[m
[32m+[m[32m                        "Beds__c": 3,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-11",[m
[32m+[m[32m                        "Description__c": "Green juice 8-bit scenester cupidatat venmo, ramps eu pickled ea cornhole. Odio veniam trust fund, marfa normcore mlkshk kitsch anim culpa distillery vexillologist pinterest consequat. Microdosing commodo stumptown, tote bag pour-over normcore kickstarter.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.084454,[m
[32m+[m[32m                        "Location__Latitude__s": 42.368168,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house05.jpg",[m
[32m+[m[32m                        "Price__c": 850000,[m
[32m+[m[32m                        "Name": "211 Charles Street",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Modern",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house05sq.jpg",[m
[32m+[m[32m                        "Title__c": "Waterfront in the City",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef6"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Miriam Aupont",[m
[32m+[m[32m            "Email__c": "miriam@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/miriam_aupont.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef10"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "448 Hanover St",[m
[32m+[m[32m                        "Assessed_Value__c": 478500,[m
[32m+[m[32m                        "Baths__c": 2,[m
[32m+[m[32m                        "Beds__c": 4,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-03",[m
[32m+[m[32m                        "Description__c": "Blimey Admiral of the Black Jolly Roger pirate Buccaneer line ballast spirits chantey topmast. Plate Fleet heave down booty Chain Shot nipper spike cutlass furl pinnace bounty. Gabion ahoy piracy coffer killick schooner main sheet holystone careen barque.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.052617,[m
[32m+[m[32m                        "Location__Latitude__s": 42.366855,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house06.jpg",[m
[32m+[m[32m                        "Price__c": 725000,[m
[32m+[m[32m                        "Name": "448 Hanover St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Colonial",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house06sq.jpg",[m
[32m+[m[32m                        "Title__c": "Quiet Retreat",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef7"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Michelle Lambert",[m
[32m+[m[32m            "Email__c": "michelle@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/michelle_lambert.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef11"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "127 Endicott St",[m
[32m+[m[32m                        "Assessed_Value__c": 364500,[m
[32m+[m[32m                        "Baths__c": 1,[m
[32m+[m[32m                        "Beds__c": 3,[m
[32m+[m[32m                        "City__c": "Boston",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-08",[m
[32m+[m[32m                        "Description__c": "Ad placeat sartorial, qui celiac ramps fap lumbersexual cray truffaut meh small batch godard. Single-origin coffee dolore gastropub pickled blue bottle, master cleanse migas cupidatat.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.057352,[m
[32m+[m[32m                        "Location__Latitude__s": 42.365003,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house07.jpg",[m
[32m+[m[32m                        "Price__c": 450000,[m
[32m+[m[32m                        "Name": "127 Endicott St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Victorian",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house07sq.jpg",[m
[32m+[m[32m                        "Title__c": "City Living",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        },[m
[32m+[m[32m        {[m
[32m+[m[32m            "attributes": {[m
[32m+[m[32m                "type": "Broker__c",[m
[32m+[m[32m                "referenceId": "Broker__cRef8"[m
[32m+[m[32m            },[m
[32m+[m[32m            "Name": "Victor Ochoa",[m
[32m+[m[32m            "Email__c": "victor@dreamhouse.demo",[m
[32m+[m[32m            "Phone__c": "617-244-3672",[m
[32m+[m[32m            "Mobile_Phone__c": "617-244-3672",[m
[32m+[m[32m            "Title__c": "Senior Broker",[m
[32m+[m[32m            "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/victor_ochoa.jpg",[m
[32m+[m[32m            "Properties__r": {[m
[32m+[m[32m                "records": [[m
[32m+[m[32m                    {[m
[32m+[m[32m                        "attributes": {[m
[32m+[m[32m                            "type": "Property__c",[m
[32m+[m[32m                            "referenceId": "Property__cRef12"[m
[32m+[m[32m                        },[m
[32m+[m[32m                        "Address__c": "48 Brattle St",[m
[32m+[m[32m                        "Assessed_Value__c": 373500,[m
[32m+[m[32m                        "Baths__c": 4,[m
[32m+[m[32m                        "Beds__c": 5,[m
[32m+[m[32m                        "City__c": "Cambridge",[m
[32m+[m[32m                        "Date_Listed__c": "2021-02-05",[m
[32m+[m[32m                        "Description__c": "Can you ballpark the cost per unit for me market-facing. Going forward put a record on and see who dances, yet powerpoint Bunny. Moving the goalposts paddle on both sides, or future-proof, yet move the needle Q1 strategic fit, for usabiltiy.",[m
[32m+[m[32m                        "Location__Longitude__s": -71.121653,[m
[32m+[m[32m                        "Location__Latitude__s": 42.374117,[m
[32m+[m[32m                        "Picture__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house10.jpg",[m
[32m+[m[32m                        "Price__c": 450000,[m
[32m+[m[32m                        "Name": "48 Brattle St",[m
[32m+[m[32m                        "State__c": "MA",[m
[32m+[m[32m                        "Status__c": "Available",[m
[32m+[m[32m                        "Tags__c": "Colonial",[m
[32m+[m[32m                        "Thumbnail__c": "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house10sq.jpg",[m
[32m+[m[32m                        "Title__c": "Heart of Harvard Square",[m
[32m+[m[32m                        "Zip__c": "02420"[m
[32m+[m[32m                    }[m
[32m+[m[32m                ][m
[32m+[m[32m            }[m
[32m+[m[32m        }[m
[32m+[m[32m    ][m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/assets/package.xml b/assets/package.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..67a0028[m
[1m--- /dev/null[m
[1m+++ b/assets/package.xml[m
[36m@@ -0,0 +1,55 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Package xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>DreamHouseSampleDataController</members>[m
[32m+[m[32m    <members>DreamHouseSampleDataControllerTest</members>[m
[32m+[m[32m    <name>ApexClass</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>DreamHouseSampleData</members>[m
[32m+[m[32m    <name>ApexPage</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Broker__c.Broker_Compact</members>[m
[32m+[m[32m    <members>Property__c.Property_Compact_Layout</members>[m
[32m+[m[32m    <name>CompactLayout</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>DreamHouseLogo</members>[m
[32m+[m[32m    <name>ContentAsset</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>DreamHouse</members>[m
[32m+[m[32m    <name>CustomApplication</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Broker__c</members>[m
[32m+[m[32m    <members>Property__c</members>[m
[32m+[m[32m    <name>CustomObject</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Broker__c</members>[m
[32m+[m[32m    <members>Property__c</members>[m
[32m+[m[32m    <members>Sample_Data_Import</members>[m
[32m+[m[32m    <name>CustomTab</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Property_Record_Page</members>[m
[32m+[m[32m    <name>FlexiPage</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Broker__c-Broker Layout</members>[m
[32m+[m[32m    <members>Property__c-Property Layout</members>[m
[32m+[m[32m    <name>Layout</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>Broker__c.All</members>[m
[32m+[m[32m    <members>Property__c.All</members>[m
[32m+[m[32m    <name>ListView</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <types>[m
[32m+[m[32m    <members>DreamHouse</members>[m
[32m+[m[32m    <name>PermissionSet</name>[m
[32m+[m[32m  </types>[m
[32m+[m[32m  <version>51.0</version>[m
[32m+[m[32m</Package>[m
\ No newline at end of file[m
[1mdiff --git a/config/project-scratch-def.json b/config/project-scratch-def.json[m
[1mnew file mode 100644[m
[1mindex 0000000..bb72192[m
[1m--- /dev/null[m
[1m+++ b/config/project-scratch-def.json[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "orgName": "Demo company",[m
[32m+[m[32m  "edition": "Developer",[m
[32m+[m[32m  "features": ["EnableSetPasswordInApi"],[m
[32m+[m[32m  "settings": {[m
[32m+[m[32m    "lightningExperienceSettings": {[m
[32m+[m[32m      "enableS1DesktopEnabled": true[m
[32m+[m[32m    },[m
[32m+[m[32m    "mobileSettings": {[m
[32m+[m[32m      "enableS1EncryptedStoragePref2": false[m
[32m+[m[32m    }[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/force-app/main/default/applications/DreamHouse.app-meta.xml b/force-app/main/default/applications/DreamHouse.app-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..66c4ece[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/applications/DreamHouse.app-meta.xml[m
[36m@@ -0,0 +1,30 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomApplication xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <comment>Action override created by Lightning App Builder during activation.</comment>[m
[32m+[m[32m        <content>Property_Record_Page</content>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <skipRecordTypeSelect>false</skipRecordTypeSelect>[m
[32m+[m[32m        <type>Flexipage</type>[m
[32m+[m[32m        <pageOrSobjectType>Property__c</pageOrSobjectType>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <brand>[m
[32m+[m[32m        <headerColor>#0070D2</headerColor>[m
[32m+[m[32m        <logo>DreamHouseLogo</logo>[m
[32m+[m[32m        <logoVersion>1</logoVersion>[m
[32m+[m[32m        <shouldOverrideOrgTheme>false</shouldOverrideOrgTheme>[m
[32m+[m[32m    </brand>[m
[32m+[m[32m    <description>DreamHouse helps you connect with your customers in a whole new way.</description>[m
[32m+[m[32m    <formFactors>Large</formFactors>[m
[32m+[m[32m    <isNavAutoTempTabsDisabled>false</isNavAutoTempTabsDisabled>[m
[32m+[m[32m    <isNavPersonalizationDisabled>false</isNavPersonalizationDisabled>[m
[32m+[m[32m    <label>DreamHouse</label>[m
[32m+[m[32m    <navType>Standard</navType>[m
[32m+[m[32m    <tabs>standard-home</tabs>[m
[32m+[m[32m    <tabs>Property__c</tabs>[m
[32m+[m[32m    <tabs>Broker__c</tabs>[m
[32m+[m[32m    <tabs>standard-Contact</tabs>[m
[32m+[m[32m    <tabs>Sample_Data_Import</tabs>[m
[32m+[m[32m    <uiType>Lightning</uiType>[m
[32m+[m[32m</CustomApplication>[m
[1mdiff --git a/force-app/main/default/aura/.eslintrc.json b/force-app/main/default/aura/.eslintrc.json[m
[1mnew file mode 100644[m
[1mindex 0000000..b637383[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/aura/.eslintrc.json[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "plugins": ["@salesforce/eslint-plugin-aura"],[m
[32m+[m[32m  "extends": ["plugin:@salesforce/eslint-plugin-aura/recommended", "prettier"],[m
[32m+[m[32m  "rules": {[m
[32m+[m[32m    "func-names": "off",[m
[32m+[m[32m    "vars-on-top": "off",[m
[32m+[m[32m    "no-unused-expressions": "off"[m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/force-app/main/default/classes/DreamHouseSampleDataController.cls b/force-app/main/default/classes/DreamHouseSampleDataController.cls[m
[1mnew file mode 100644[m
[1mindex 0000000..807740b[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/classes/DreamHouseSampleDataController.cls[m
[36m@@ -0,0 +1,8 @@[m
[32m+[m[32mglobal with sharing class DreamHouseSampleDataController {[m
[32m+[m
[32m+[m[32m    @RemoteAction[m
[32m+[m[32m    global static void deleteAll() {[m
[32m+[m[32m        DELETE [SELECT ID FROM property__c];[m[41m    [m
[32m+[m[32m        DELETE [SELECT ID FROM broker__c];[m
[32m+[m[32m    }[m[41m    [m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/force-app/main/default/classes/DreamHouseSampleDataController.cls-meta.xml b/force-app/main/default/classes/DreamHouseSampleDataController.cls-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..252fbfd[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/classes/DreamHouseSampleDataController.cls-meta.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ApexClass xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <apiVersion>47.0</apiVersion>[m
[32m+[m[32m    <status>Active</status>[m
[32m+[m[32m</ApexClass>[m
[1mdiff --git a/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls b/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls[m
[1mnew file mode 100644[m
[1mindex 0000000..60e75b4[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls[m
[36m@@ -0,0 +1,27 @@[m
[32m+[m[32m@isTest[m
[32m+[m[32mprivate class DreamHouseSampleDataControllerTest {[m
[32m+[m
[32m+[m[32m    @isTest[m
[32m+[m[32m    static void test_deleteAll() {[m
[32m+[m
[32m+[m[32m        Property__c property = new Property__c();[m
[32m+[m[32m        Broker__c broker = new Broker__c();[m
[32m+[m
[32m+[m[32m        insert property;[m
[32m+[m[32m        insert broker;[m
[32m+[m
[32m+[m[32m        System.assertEquals( 1, [ SELECT count() FROM Property__c ] );[m
[32m+[m[32m        System.assertEquals( 1, [ SELECT count() FROM Broker__c ] );[m
[32m+[m
[32m+[m[32m        Test.startTest();[m
[32m+[m
[32m+[m[32m        DreamHouseSampleDataController.deleteAll();[m
[32m+[m
[32m+[m[32m        Test.stopTest();[m
[32m+[m
[32m+[m[32m        System.assertEquals( 0, [ SELECT count() FROM Property__c ] );[m
[32m+[m[32m        System.assertEquals( 0, [ SELECT count() FROM Broker__c ] );[m
[32m+[m
[32m+[m[32m    }[m
[32m+[m
[32m+[m[32m}[m
\ No newline at end of file[m
[1mdiff --git a/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls-meta.xml b/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..252fbfd[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/classes/DreamHouseSampleDataControllerTest.cls-meta.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ApexClass xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <apiVersion>47.0</apiVersion>[m
[32m+[m[32m    <status>Active</status>[m
[32m+[m[32m</ApexClass>[m
[1mdiff --git a/force-app/main/default/contentassets/DreamHouseLogo.asset b/force-app/main/default/contentassets/DreamHouseLogo.asset[m
[1mnew file mode 100644[m
[1mindex 0000000..4fef8da[m
Binary files /dev/null and b/force-app/main/default/contentassets/DreamHouseLogo.asset differ
[1mdiff --git a/force-app/main/default/contentassets/DreamHouseLogo.asset-meta.xml b/force-app/main/default/contentassets/DreamHouseLogo.asset-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..6b06cdd[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/contentassets/DreamHouseLogo.asset-meta.xml[m
[36m@@ -0,0 +1,17 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ContentAsset xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <isVisibleByExternalUsers>false</isVisibleByExternalUsers>[m
[32m+[m[32m    <language>en_US</language>[m
[32m+[m[32m    <masterLabel>DreamHouseLogo</masterLabel>[m
[32m+[m[32m    <relationships>[m
[32m+[m[32m        <organization>[m
[32m+[m[32m            <access>VIEWER</access>[m
[32m+[m[32m        </organization>[m
[32m+[m[32m    </relationships>[m
[32m+[m[32m    <versions>[m
[32m+[m[32m        <version>[m
[32m+[m[32m            <number>1</number>[m
[32m+[m[32m            <pathOnClient>DreamHouseLogo.png</pathOnClient>[m
[32m+[m[32m        </version>[m
[32m+[m[32m    </versions>[m
[32m+[m[32m</ContentAsset>[m
[1mdiff --git a/force-app/main/default/flexipages/Property_Record_Page.flexipage-meta.xml b/force-app/main/default/flexipages/Property_Record_Page.flexipage-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e169b33[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/flexipages/Property_Record_Page.flexipage-meta.xml[m
[36m@@ -0,0 +1,162 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<FlexiPage xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>collapsed</name>[m
[32m+[m[32m                    <value>false</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>force:highlightsPanel</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>header</name>[m
[32m+[m[32m        <type>Region</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentName>force:relatedListContainer</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>relatedTabContent</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentName>force:detailPanel</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>detailTabContent</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>body</name>[m
[32m+[m[32m                    <value>relatedTabContent</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>title</name>[m
[32m+[m[32m                    <value>Standard.Tab.relatedLists</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tab</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>active</name>[m
[32m+[m[32m                    <value>true</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>body</name>[m
[32m+[m[32m                    <value>detailTabContent</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>title</name>[m
[32m+[m[32m                    <value>Standard.Tab.detail</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tab</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>maintabs</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>tabs</name>[m
[32m+[m[32m                    <value>maintabs</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tabset</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>main</name>[m
[32m+[m[32m        <type>Region</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentName>runtime_sales_activities:activityPanel</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>activityTabContent</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentName>forceChatter:recordFeedContainer</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>feedTabContent</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>active</name>[m
[32m+[m[32m                    <value>true</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>body</name>[m
[32m+[m[32m                    <value>activityTabContent</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>title</name>[m
[32m+[m[32m                    <value>Standard.Tab.activity</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tab</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>body</name>[m
[32m+[m[32m                    <value>feedTabContent</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>title</name>[m
[32m+[m[32m                    <value>Standard.Tab.collaborate</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tab</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>sidebartabs</name>[m
[32m+[m[32m        <type>Facet</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <flexiPageRegions>[m
[32m+[m[32m        <itemInstances>[m
[32m+[m[32m            <componentInstance>[m
[32m+[m[32m                <componentInstanceProperties>[m
[32m+[m[32m                    <name>tabs</name>[m
[32m+[m[32m                    <value>sidebartabs</value>[m
[32m+[m[32m                </componentInstanceProperties>[m
[32m+[m[32m                <componentName>flexipage:tabset</componentName>[m
[32m+[m[32m            </componentInstance>[m
[32m+[m[32m        </itemInstances>[m
[32m+[m[32m        <mode>Replace</mode>[m
[32m+[m[32m        <name>sidebar</name>[m
[32m+[m[32m        <type>Region</type>[m
[32m+[m[32m    </flexiPageRegions>[m
[32m+[m[32m    <masterLabel>Property Record Page</masterLabel>[m
[32m+[m[32m    <parentFlexiPage>flexipage__default_rec_L</parentFlexiPage>[m
[32m+[m[32m    <sobjectType>Property__c</sobjectType>[m
[32m+[m[32m    <template>[m
[32m+[m[32m        <name>flexipage:recordHomeTemplateDesktop</name>[m
[32m+[m[32m    </template>[m
[32m+[m[32m    <type>RecordPage</type>[m
[32m+[m[32m</FlexiPage>[m
[1mdiff --git a/force-app/main/default/layouts/Broker__c-Broker Layout.layout-meta.xml b/force-app/main/default/layouts/Broker__c-Broker Layout.layout-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..02288f1[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/layouts/Broker__c-Broker Layout.layout-meta.xml[m	
[36m@@ -0,0 +1,97 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Layout xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <excludeButtons>Submit</excludeButtons>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>true</customLabel>[m
[32m+[m[32m        <detailHeading>true</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Picture</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Readonly</behavior>[m
[32m+[m[32m                <field>Picture_IMG__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>OneColumn</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>false</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Information</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Required</behavior>[m
[32m+[m[32m                <field>Name</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Title__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Email__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>OwnerId</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Phone__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Mobile_Phone__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>TwoColumnsTopToBottom</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>false</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>System Information</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Readonly</behavior>[m
[32m+[m[32m                <field>CreatedById</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Readonly</behavior>[m
[32m+[m[32m                <field>LastModifiedById</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>TwoColumnsTopToBottom</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>true</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Custom Links</label>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <style>CustomLinks</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <relatedLists>[m
[32m+[m[32m        <fields>NAME</fields>[m
[32m+[m[32m        <fields>Price__c</fields>[m
[32m+[m[32m        <relatedList>Property__c.Broker__c</relatedList>[m
[32m+[m[32m    </relatedLists>[m
[32m+[m[32m    <showEmailCheckbox>false</showEmailCheckbox>[m
[32m+[m[32m    <showHighlightsPanel>false</showHighlightsPanel>[m
[32m+[m[32m    <showInteractionLogPanel>false</showInteractionLogPanel>[m
[32m+[m[32m    <showRunAssignmentRulesCheckbox>false</showRunAssignmentRulesCheckbox>[m
[32m+[m[32m    <showSubmitAndAttachButton>false</showSubmitAndAttachButton>[m
[32m+[m[32m    <summaryLayout>[m
[32m+[m[32m        <masterLabel>00h36000000O5GM</masterLabel>[m
[32m+[m[32m        <sizeX>4</sizeX>[m
[32m+[m[32m        <sizeY>0</sizeY>[m
[32m+[m[32m        <summaryLayoutStyle>Default</summaryLayoutStyle>[m
[32m+[m[32m    </summaryLayout>[m
[32m+[m[32m</Layout>[m
[1mdiff --git a/force-app/main/default/layouts/Property__c-Property Layout.layout-meta.xml b/force-app/main/default/layouts/Property__c-Property Layout.layout-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..6831683[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/layouts/Property__c-Property Layout.layout-meta.xml[m	
[36m@@ -0,0 +1,127 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<Layout xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <excludeButtons>Submit</excludeButtons>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>false</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Information</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Title__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Address__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>State__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Beds__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Price__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Status__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Tags__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Required</behavior>[m
[32m+[m[32m                <field>Name</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>City__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Zip__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Baths__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Assessed_Value__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Date_Listed__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Broker__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>TwoColumnsTopToBottom</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>true</customLabel>[m
[32m+[m[32m        <detailHeading>true</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Pictures</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Readonly</behavior>[m
[32m+[m[32m                <field>Picture_IMG__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Readonly</behavior>[m
[32m+[m[32m                <field>Thumbnail_IMG__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>TwoColumnsTopToBottom</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>true</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Custom Links</label>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <style>CustomLinks</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>true</customLabel>[m
[32m+[m[32m        <detailHeading>true</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>Description</label>[m
[32m+[m[32m        <layoutColumns>[m
[32m+[m[32m            <layoutItems>[m
[32m+[m[32m                <behavior>Edit</behavior>[m
[32m+[m[32m                <field>Description__c</field>[m
[32m+[m[32m            </layoutItems>[m
[32m+[m[32m        </layoutColumns>[m
[32m+[m[32m        <style>OneColumn</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <layoutSections>[m
[32m+[m[32m        <customLabel>false</customLabel>[m
[32m+[m[32m        <detailHeading>false</detailHeading>[m
[32m+[m[32m        <editHeading>true</editHeading>[m
[32m+[m[32m        <label>System Information</label>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <layoutColumns/>[m
[32m+[m[32m        <style>TwoColumnsTopToBottom</style>[m
[32m+[m[32m    </layoutSections>[m
[32m+[m[32m    <showEmailCheckbox>false</showEmailCheckbox>[m
[32m+[m[32m    <showHighlightsPanel>false</showHighlightsPanel>[m
[32m+[m[32m    <showInteractionLogPanel>false</showInteractionLogPanel>[m
[32m+[m[32m    <showRunAssignmentRulesCheckbox>false</showRunAssignmentRulesCheckbox>[m
[32m+[m[32m    <showSubmitAndAttachButton>false</showSubmitAndAttachButton>[m
[32m+[m[32m</Layout>[m
[1mdiff --git a/force-app/main/default/lwc/.eslintrc.json b/force-app/main/default/lwc/.eslintrc.json[m
[1mnew file mode 100644[m
[1mindex 0000000..d679b1d[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/lwc/.eslintrc.json[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "extends": ["@salesforce/eslint-config-lwc/recommended", "prettier"],[m
[32m+[m[32m  "overrides": [[m
[32m+[m[32m    {[m
[32m+[m[32m      "files": ["*.test.js"],[m
[32m+[m[32m      "rules": {[m
[32m+[m[32m        "@lwc/lwc/no-unexpected-wire-adapter-usages": "off"[m
[32m+[m[32m      }[m
[32m+[m[32m    }[m
[32m+[m[32m  ][m
[32m+[m[32m}[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/Broker__c.object-meta.xml b/force-app/main/default/objects/Broker__c/Broker__c.object-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f456016[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/Broker__c.object-meta.xml[m
[36m@@ -0,0 +1,165 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomObject xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <allowInChatterGroups>false</allowInChatterGroups>[m
[32m+[m[32m    <compactLayoutAssignment>Broker_Compact</compactLayoutAssignment>[m
[32m+[m[32m    <deploymentStatus>Deployed</deploymentStatus>[m
[32m+[m[32m    <enableActivities>false</enableActivities>[m
[32m+[m[32m    <enableBulkApi>true</enableBulkApi>[m
[32m+[m[32m    <enableFeeds>false</enableFeeds>[m
[32m+[m[32m    <enableHistory>false</enableHistory>[m
[32m+[m[32m    <enableLicensing>false</enableLicensing>[m
[32m+[m[32m    <enableReports>true</enableReports>[m
[32m+[m[32m    <enableSearch>true</enableSearch>[m
[32m+[m[32m    <enableSharing>true</enableSharing>[m
[32m+[m[32m    <enableStreamingApi>true</enableStreamingApi>[m
[32m+[m[32m    <externalSharingModel>Private</externalSharingModel>[m
[32m+[m[32m    <label>Broker</label>[m
[32m+[m[32m    <nameField>[m
[32m+[m[32m        <label>Broker Name</label>[m
[32m+[m[32m        <type>Text</type>[m
[32m+[m[32m    </nameField>[m
[32m+[m[32m    <pluralLabel>Brokers</pluralLabel>[m
[32m+[m[32m    <searchLayouts/>[m
[32m+[m[32m    <sharingModel>ReadWrite</sharingModel>[m
[32m+[m[32m    <visibility>Public</visibility>[m
[32m+[m[32m</CustomObject>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/compactLayouts/Broker_Compact.compactLayout-meta.xml b/force-app/main/default/objects/Broker__c/compactLayouts/Broker_Compact.compactLayout-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..1975fa1[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/compactLayouts/Broker_Compact.compactLayout-meta.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CompactLayout xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Broker_Compact</fullName>[m
[32m+[m[32m    <fields>Name</fields>[m
[32m+[m[32m    <fields>Title__c</fields>[m
[32m+[m[32m    <fields>Phone__c</fields>[m
[32m+[m[32m    <fields>Mobile_Phone__c</fields>[m
[32m+[m[32m    <fields>Email__c</fields>[m
[32m+[m[32m    <label>Broker Compact</label>[m
[32m+[m[32m</CompactLayout>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Email__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Email__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..515967f[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Email__c.field-meta.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Email__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Email</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Email</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Mobile_Phone__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Mobile_Phone__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..16d1912[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Mobile_Phone__c.field-meta.xml[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Mobile_Phone__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Mobile Phone</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Phone</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Phone__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Phone__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..151b876[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Phone__c.field-meta.xml[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Phone__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Phone</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Phone</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Picture_IMG__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Picture_IMG__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..1ee98c4[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Picture_IMG__c.field-meta.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Picture_IMG__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <formula>IMAGE( Picture__c , &quot;picture&quot; , 150, 150)</formula>[m
[32m+[m[32m    <formulaTreatBlanksAs>BlankAsZero</formulaTreatBlanksAs>[m
[32m+[m[32m    <label>Picture</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Picture__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Picture__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..87d9beb[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Picture__c.field-meta.xml[m
[36m@@ -0,0 +1,9 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Picture__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Picture</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Url</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/fields/Title__c.field-meta.xml b/force-app/main/default/objects/Broker__c/fields/Title__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..88d88c8[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/fields/Title__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Title__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Title</label>[m
[32m+[m[32m    <length>30</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Broker__c/listViews/All.listView-meta.xml b/force-app/main/default/objects/Broker__c/listViews/All.listView-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..f957a40[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Broker__c/listViews/All.listView-meta.xml[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ListView xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>All</fullName>[m
[32m+[m[32m    <columns>NAME</columns>[m
[32m+[m[32m    <filterScope>Everything</filterScope>[m
[32m+[m[32m    <label>All</label>[m
[32m+[m[32m</ListView>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/Property__c.object-meta.xml b/force-app/main/default/objects/Property__c/Property__c.object-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a40e12f[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/Property__c.object-meta.xml[m
[36m@@ -0,0 +1,183 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomObject xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Accept</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>CancelEdit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Clone</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Delete</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Edit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>List</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>New</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>SaveEdit</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>Tab</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <comment>Action override created by Lightning App Builder during activation.</comment>[m
[32m+[m[32m        <content>Property_Record_Page</content>[m
[32m+[m[32m        <formFactor>Large</formFactor>[m
[32m+[m[32m        <skipRecordTypeSelect>false</skipRecordTypeSelect>[m
[32m+[m[32m        <type>Flexipage</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <actionOverrides>[m
[32m+[m[32m        <actionName>View</actionName>[m
[32m+[m[32m        <formFactor>Small</formFactor>[m
[32m+[m[32m        <type>Default</type>[m
[32m+[m[32m    </actionOverrides>[m
[32m+[m[32m    <allowInChatterGroups>false</allowInChatterGroups>[m
[32m+[m[32m    <compactLayoutAssignment>Property_Compact_Layout</compactLayoutAssignment>[m
[32m+[m[32m    <deploymentStatus>Deployed</deploymentStatus>[m
[32m+[m[32m    <enableActivities>true</enableActivities>[m
[32m+[m[32m    <enableBulkApi>true</enableBulkApi>[m
[32m+[m[32m    <enableFeeds>true</enableFeeds>[m
[32m+[m[32m    <enableHistory>true</enableHistory>[m
[32m+[m[32m    <enableLicensing>false</enableLicensing>[m
[32m+[m[32m    <enableReports>true</enableReports>[m
[32m+[m[32m    <enableSearch>true</enableSearch>[m
[32m+[m[32m    <enableSharing>true</enableSharing>[m
[32m+[m[32m    <enableStreamingApi>true</enableStreamingApi>[m
[32m+[m[32m    <externalSharingModel>Private</externalSharingModel>[m
[32m+[m[32m    <label>Property</label>[m
[32m+[m[32m    <nameField>[m
[32m+[m[32m        <label>Property Name</label>[m
[32m+[m[32m        <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m        <trackHistory>false</trackHistory>[m
[32m+[m[32m        <type>Text</type>[m
[32m+[m[32m    </nameField>[m
[32m+[m[32m    <pluralLabel>Properties</pluralLabel>[m
[32m+[m[32m    <searchLayouts>[m
[32m+[m[32m        <customTabListAdditionalFields>City__c</customTabListAdditionalFields>[m
[32m+[m[32m        <customTabListAdditionalFields>Beds__c</customTabListAdditionalFields>[m
[32m+[m[32m        <customTabListAdditionalFields>Price__c</customTabListAdditionalFields>[m
[32m+[m[32m        <lookupDialogsAdditionalFields>City__c</lookupDialogsAdditionalFields>[m
[32m+[m[32m        <lookupDialogsAdditionalFields>Beds__c</lookupDialogsAdditionalFields>[m
[32m+[m[32m        <lookupDialogsAdditionalFields>Price__c</lookupDialogsAdditionalFields>[m
[32m+[m[32m        <lookupPhoneDialogsAdditionalFields>City__c</lookupPhoneDialogsAdditionalFields>[m
[32m+[m[32m        <lookupPhoneDialogsAdditionalFields>Beds__c</lookupPhoneDialogsAdditionalFields>[m
[32m+[m[32m        <lookupPhoneDialogsAdditionalFields>Price__c</lookupPhoneDialogsAdditionalFields>[m
[32m+[m[32m        <searchResultsAdditionalFields>City__c</searchResultsAdditionalFields>[m
[32m+[m[32m        <searchResultsAdditionalFields>Beds__c</searchResultsAdditionalFields>[m
[32m+[m[32m        <searchResultsAdditionalFields>Price__c</searchResultsAdditionalFields>[m
[32m+[m[32m    </searchLayouts>[m
[32m+[m[32m    <sharingModel>ReadWrite</sharingModel>[m
[32m+[m[32m    <visibility>Public</visibility>[m
[32m+[m[32m</CustomObject>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/compactLayouts/Property_Compact_Layout.compactLayout-meta.xml b/force-app/main/default/objects/Property__c/compactLayouts/Property_Compact_Layout.compactLayout-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bbe1071[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/compactLayouts/Property_Compact_Layout.compactLayout-meta.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CompactLayout xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Property_Compact_Layout</fullName>[m
[32m+[m[32m    <fields>Name</fields>[m
[32m+[m[32m    <fields>City__c</fields>[m
[32m+[m[32m    <fields>Price__c</fields>[m
[32m+[m[32m    <fields>Beds__c</fields>[m
[32m+[m[32m    <fields>Baths__c</fields>[m
[32m+[m[32m    <label>Property Compact Layout</label>[m
[32m+[m[32m</CompactLayout>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Address__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Address__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..5fbb048[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Address__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Address__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Address</label>[m
[32m+[m[32m    <length>100</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Assessed_Value__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Assessed_Value__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e98b7fd[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Assessed_Value__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Assessed_Value__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Assessed Value</label>[m
[32m+[m[32m    <precision>18</precision>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>0</scale>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Currency</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Baths__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Baths__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..107b031[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Baths__c.field-meta.xml[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Baths__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Baths</label>[m
[32m+[m[32m    <precision>2</precision>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>0</scale>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Number</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Beds__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Beds__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..3adbb35[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Beds__c.field-meta.xml[m
[36m@@ -0,0 +1,14 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Beds__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Beds</label>[m
[32m+[m[32m    <precision>2</precision>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>0</scale>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Number</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Broker__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Broker__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..cd7ed18[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Broker__c.field-meta.xml[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Broker__c</fullName>[m
[32m+[m[32m    <deleteConstraint>SetNull</deleteConstraint>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Broker</label>[m
[32m+[m[32m    <referenceTo>Broker__c</referenceTo>[m
[32m+[m[32m    <relationshipLabel>Properties</relationshipLabel>[m
[32m+[m[32m    <relationshipName>Properties</relationshipName>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Lookup</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/City__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/City__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..c3ccc00[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/City__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>City__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>City</label>[m
[32m+[m[32m    <length>50</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Date_Agreement__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Date_Agreement__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..43d134a[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Date_Agreement__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Date_Agreement__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Date Agreement</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Date</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Date_Closed__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Date_Closed__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bcc7545[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Date_Closed__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Date_Closed__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Date Closed</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Date</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Date_Contracted__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Date_Contracted__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..5702f74[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Date_Contracted__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Date_Contracted__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Date Contracted</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Date</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Date_Listed__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Date_Listed__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..aaa5d9c[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Date_Listed__c.field-meta.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Date_Listed__c</fullName>[m
[32m+[m[32m    <defaultValue>TODAY() - 10</defaultValue>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Date Listed</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Date</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Date_Pre_Market__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Date_Pre_Market__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..40f8633[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Date_Pre_Market__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Date_Pre_Market__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Date Pre Market</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Date</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Days_On_Market__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Days_On_Market__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..43095ad[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Days_On_Market__c.field-meta.xml[m
[36m@@ -0,0 +1,15 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Days_On_Market__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <formula>TODAY() - Date_Listed__c</formula>[m
[32m+[m[32m    <formulaTreatBlanksAs>BlankAsZero</formulaTreatBlanksAs>[m
[32m+[m[32m    <label>Days On Market</label>[m
[32m+[m[32m    <precision>18</precision>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>0</scale>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Number</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Description__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Description__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..006d77a[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Description__c.field-meta.xml[m
[36m@@ -0,0 +1,12 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Description__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Description</label>[m
[32m+[m[32m    <length>500</length>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>LongTextArea</type>[m
[32m+[m[32m    <visibleLines>3</visibleLines>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Location__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Location__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e828444[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Location__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Location__c</fullName>[m
[32m+[m[32m    <displayLocationInDecimal>true</displayLocationInDecimal>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Location</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>7</scale>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Location</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Picture_IMG__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Picture_IMG__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..1be1f9e[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Picture_IMG__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Picture_IMG__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <formula>if(ISBLANK(Picture__c), &apos;&apos;, IMAGE(Picture__c, &quot;Picture&quot;))</formula>[m
[32m+[m[32m    <formulaTreatBlanksAs>BlankAsZero</formulaTreatBlanksAs>[m
[32m+[m[32m    <label>Main Picture</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Picture__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Picture__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..64bd40a[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Picture__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Picture__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Picture</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Url</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Price__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Price__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a082b03[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Price__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Price__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Price</label>[m
[32m+[m[32m    <precision>8</precision>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <scale>0</scale>[m
[32m+[m[32m    <trackFeedHistory>true</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>true</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Currency</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Record_Link__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Record_Link__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..a186ead[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Record_Link__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Record_Link__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <formula>LEFT($Api.Partner_Server_URL_260, FIND( &apos;/services&apos;, $Api.Partner_Server_URL_260))+ Id</formula>[m
[32m+[m[32m    <formulaTreatBlanksAs>BlankAsZero</formulaTreatBlanksAs>[m
[32m+[m[32m    <label>Record Link</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/RemoveMe__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/RemoveMe__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..6b1837f[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/RemoveMe__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>RemoveMe__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>RemoveMe</label>[m
[32m+[m[32m    <length>30</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/State__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/State__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..286d042[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/State__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>State__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>State</label>[m
[32m+[m[32m    <length>20</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Status__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Status__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..c7b6861[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Status__c.field-meta.xml[m
[36m@@ -0,0 +1,41 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Status__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Status</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>true</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Picklist</type>[m
[32m+[m[32m    <valueSet>[m
[32m+[m[32m        <valueSetDefinition>[m
[32m+[m[32m            <sorted>false</sorted>[m
[32m+[m[32m            <value>[m
[32m+[m[32m                <fullName>Contracted</fullName>[m
[32m+[m[32m                <default>false</default>[m
[32m+[m[32m                <label>Contracted</label>[m
[32m+[m[32m            </value>[m
[32m+[m[32m            <value>[m
[32m+[m[32m                <fullName>Pre Market</fullName>[m
[32m+[m[32m                <default>false</default>[m
[32m+[m[32m                <label>Pre Market</label>[m
[32m+[m[32m            </value>[m
[32m+[m[32m            <value>[m
[32m+[m[32m                <fullName>Available</fullName>[m
[32m+[m[32m                <default>false</default>[m
[32m+[m[32m                <label>Available</label>[m
[32m+[m[32m            </value>[m
[32m+[m[32m            <value>[m
[32m+[m[32m                <fullName>Under Agreement</fullName>[m
[32m+[m[32m                <default>false</default>[m
[32m+[m[32m                <label>Under Agreement</label>[m
[32m+[m[32m            </value>[m
[32m+[m[32m            <value>[m
[32m+[m[32m                <fullName>Closed</fullName>[m
[32m+[m[32m                <default>false</default>[m
[32m+[m[32m                <label>Closed</label>[m
[32m+[m[32m            </value>[m
[32m+[m[32m        </valueSetDefinition>[m
[32m+[m[32m    </valueSet>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Tags__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Tags__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..8fc32b7[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Tags__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Tags__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Tags</label>[m
[32m+[m[32m    <length>255</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Thumbnail_IMG__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Thumbnail_IMG__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..2882ef9[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Thumbnail_IMG__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Thumbnail_IMG__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <formula>if(ISBLANK(Thumbnail__c), &quot;&quot;, IMAGE(Thumbnail__c, &quot;Picture&quot;, 200, 200))</formula>[m
[32m+[m[32m    <formulaTreatBlanksAs>BlankAsZero</formulaTreatBlanksAs>[m
[32m+[m[32m    <label>Main Thumbnail</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Thumbnail__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Thumbnail__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e575f86[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Thumbnail__c.field-meta.xml[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Thumbnail__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Thumbnail</label>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Url</type>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Title__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Title__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bf039dd[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Title__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Title__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Title</label>[m
[32m+[m[32m    <length>100</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/fields/Zip__c.field-meta.xml b/force-app/main/default/objects/Property__c/fields/Zip__c.field-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..283915b[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/fields/Zip__c.field-meta.xml[m
[36m@@ -0,0 +1,13 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomField xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>Zip__c</fullName>[m
[32m+[m[32m    <externalId>false</externalId>[m
[32m+[m[32m    <label>Zip</label>[m
[32m+[m[32m    <length>10</length>[m
[32m+[m[32m    <required>false</required>[m
[32m+[m[32m    <trackFeedHistory>false</trackFeedHistory>[m
[32m+[m[32m    <trackHistory>false</trackHistory>[m
[32m+[m[32m    <trackTrending>false</trackTrending>[m
[32m+[m[32m    <type>Text</type>[m
[32m+[m[32m    <unique>false</unique>[m
[32m+[m[32m</CustomField>[m
[1mdiff --git a/force-app/main/default/objects/Property__c/listViews/All.listView-meta.xml b/force-app/main/default/objects/Property__c/listViews/All.listView-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..6b1d602[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/objects/Property__c/listViews/All.listView-meta.xml[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ListView xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <fullName>All</fullName>[m
[32m+[m[32m    <columns>NAME</columns>[m
[32m+[m[32m    <columns>City__c</columns>[m
[32m+[m[32m    <columns>Beds__c</columns>[m
[32m+[m[32m    <columns>Price__c</columns>[m
[32m+[m[32m    <filterScope>Everything</filterScope>[m
[32m+[m[32m    <label>All</label>[m
[32m+[m[32m</ListView>[m
[1mdiff --git a/force-app/main/default/pages/DreamHouseSampleData.page b/force-app/main/default/pages/DreamHouseSampleData.page[m
[1mnew file mode 100644[m
[1mindex 0000000..af423b8[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/pages/DreamHouseSampleData.page[m
[36m@@ -0,0 +1,388 @@[m
[32m+[m[32m<apex:page controller="DreamHouseSampleDataController">[m
[32m+[m[32m    <apex:slds />[m
[32m+[m[32m    <html>[m
[32m+[m
[32m+[m[32m    <apex:remoteObjects >[m
[32m+[m
[32m+[m[32m        <apex:remoteObjectModel name="Broker__c" jsShorthand="Broker">[m
[32m+[m[32m            <apex:remoteObjectField name="Name" jsShorthand="name" />[m
[32m+[m[32m            <apex:remoteObjectField name="Title__c" jsShorthand="title" />[m
[32m+[m[32m            <apex:remoteObjectField name="Phone__c" jsShorthand="phone" />[m
[32m+[m[32m            <apex:remoteObjectField name="Mobile_Phone__c" jsShorthand="mobile_phone" />[m
[32m+[m[32m            <apex:remoteObjectField name="Email__c" jsShorthand="email" />[m
[32m+[m[32m            <apex:remoteObjectField name="Picture__c" jsShorthand="picture" />[m
[32m+[m[32m        </apex:remoteObjectModel>[m
[32m+[m
[32m+[m[32m        <apex:remoteObjectModel name="Property__c" jsShorthand="Property">[m
[32m+[m[32m            <apex:remoteObjectField name="Name" jsShorthand="name" />[m
[32m+[m[32m            <apex:remoteObjectField name="Address__c" jsShorthand="address" />[m
[32m+[m[32m            <apex:remoteObjectField name="City__c" jsShorthand="city" />[m
[32m+[m[32m            <apex:remoteObjectField name="State__c" jsShorthand="state" />[m
[32m+[m[32m            <apex:remoteObjectField name="Zip__c" jsShorthand="zip" />[m
[32m+[m[32m            <apex:remoteObjectField name="Price__c" jsShorthand="price" />[m
[32m+[m[32m            <apex:remoteObjectField name="Assessed_Value__c" jsShorthand="assessed" />[m
[32m+[m[32m            <apex:remoteObjectField name="Date_Listed__c" jsShorthand="dateListed" />[m
[32m+[m[32m            <apex:remoteObjectField name="Title__c" jsShorthand="title" />[m
[32m+[m[32m            <apex:remoteObjectField name="Beds__c" jsShorthand="bedrooms" />[m
[32m+[m[32m            <apex:remoteObjectField name="Baths__c" jsShorthand="bathrooms" />[m
[32m+[m[32m            <apex:remoteObjectField name="Status__c" jsShorthand="status" />[m
[32m+[m[32m            <apex:remoteObjectField name="Broker__c" jsShorthand="brokerId" />[m
[32m+[m[32m            <apex:remoteObjectField name="Picture__c" jsShorthand="pic" />[m
[32m+[m[32m            <apex:remoteObjectField name="Thumbnail__c" jsShorthand="thumb" />[m
[32m+[m[32m            <apex:remoteObjectField name="Description__c" jsShorthand="description" />[m
[32m+[m[32m            <apex:remoteObjectField name="Location__Latitude__s" jsShorthand="lat" />[m
[32m+[m[32m            <apex:remoteObjectField name="Location__Longitude__s" jsShorthand="long" />[m
[32m+[m[32m            <apex:remoteObjectField name="Tags__c" jsShorthand="tags" />[m
[32m+[m[32m        </apex:remoteObjectModel>[m
[32m+[m[32m    </apex:remoteObjects>[m
[32m+[m
[32m+[m[32m    <body style="padding:0;margin:0">[m
[32m+[m
[32m+[m[32m        <div class="slds-scope">[m
[32m+[m[32m            <div class="slds-page-header" role="banner">[m
[32m+[m[32m                <div class="slds-media">[m
[32m+[m[32m                    <div class="slds-media__figure">[m
[32m+[m
[32m+[m[32m                    </div>[m
[32m+[m[32m                    <div class="slds-media__body">[m
[32m+[m[32m                        <p class="slds-page-header__title slds-truncate slds-align-middle" title="DreamHouse Sample Data">DreamHouse Sample Data</p>[m
[32m+[m[32m                        <p class="slds-text-body--small slds-page-header__info">Sample data for the DreamHouse Application</p>[m
[32m+[m[32m                    </div>[m
[32m+[m[32m                </div>[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <div id="content" style="margin:20px">[m
[32m+[m[32m                <div style="padding-bottom:20px">Click the button below to iinitialize the Property, Broker, and Favorite objects with sample data.[m
[32m+[m[32m                    <div style="color:red">All existing records in these objects will be deleted.</div>[m
[32m+[m[32m                </div>[m
[32m+[m[32m                <button class="slds-button slds-button--brand" onclick="initialize()">Initialize Sample Data</button>[m
[32m+[m[32m            </div>[m
[32m+[m[32m        </div>[m
[32m+[m
[32m+[m[32m        <script>[m
[32m+[m
[32m+[m[32m            function getRandomNumber(min, max) {[m
[32m+[m[32m                return Math.floor(Math.random() * (max - min + 1)) + min;[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            var brokers = [[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Caroline Kingsley",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "caroline@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/caroline_kingsley.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Michael Jones",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "michael@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/michael_jones.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Jonathan Bradley",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "jonathan@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/jonathan_bradley.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Jennifer Wu",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "jen@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/jennifer_wu.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Olivia Green",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "olivia@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/olivia_green.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Miriam Aupont",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "miriam@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/miriam_aupont.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Michelle Lambert",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "michelle@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/michelle_lambert.jpg"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    name: "Victor Ochoa",[m
[32m+[m[32m                    title: "Senior Broker",[m
[32m+[m[32m                    phone: "617-244-3672",[m
[32m+[m[32m                    mobile_phone: "617-244-3672",[m
[32m+[m[32m                    email: "victor@dreamhouse.demo",[m
[32m+[m[32m                    picture: "https://s3-us-west-1.amazonaws.com/sfdc-demo/people/victor_ochoa.jpg"[m
[32m+[m[32m                }[m
[32m+[m[32m            ];[m
[32m+[m
[32m+[m[32m            var properties = [[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "18 Henry St",[m
[32m+[m[32m                    city: "Cambridge",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "01742",[m
[32m+[m[32m                    price: 975000,[m
[32m+[m[32m                    title: "Stunning Colonial",[m
[32m+[m[32m                    bedrooms: 4,[m
[32m+[m[32m                    bathrooms: 3,[m
[32m+[m[32m                    long: -71.11095,[m
[32m+[m[32m                    lat: 42.35663,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house01.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house01sq.jpg",[m
[32m+[m[32m                    description: "Bacon ipsum dolor amet ribeye meatball ham hock swine sausage frankfurter tail cow ball tip pork chop leberkas brisket turkey beef. Landjaeger boudin beef ribs leberkas. Prosciutto beef ribs sirloin, capicola short ribs frankfurter bacon. Picanha filet mignon boudin, bacon jerky meatball turkey.",[m
[32m+[m[32m                    broker: 0,[m
[32m+[m[32m                    tags: "Colonial"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "24 Pearl St",[m
[32m+[m[32m                    city: "Cambridge",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 1200000,[m
[32m+[m[32m                    title: "Ultimate Sophistication",[m
[32m+[m[32m                    bedrooms: 5,[m
[32m+[m[32m                    bathrooms: 4,[m
[32m+[m[32m                    long: -71.10869,[m
[32m+[m[32m                    lat: 42.359103,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house02.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house02sq.jpg",[m
[32m+[m[32m                    description: "Carouser Blimey main sheet lad bounty brig piracy aft sloop log. Run a rig furl Nelsons folly measured fer yer chains ho chandler hulk prow mutiny wench. Bilge water wherry lanyard piracy port rum cackle fruit topgallant trysail bilge.",[m
[32m+[m[32m                    broker: 1,[m
[32m+[m[32m                    tags: "Victorian"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "61 West Cedar St",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 825000,[m
[32m+[m[32m                    title: "Modern City Living",[m
[32m+[m[32m                    bedrooms: 5,[m
[32m+[m[32m                    bathrooms: 4,[m
[32m+[m[32m                    long: -71.070061,[m
[32m+[m[32m                    lat: 42.359986,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house03.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house03sq.jpg",[m
[32m+[m[32m                    description: "Pulling teeth this proposal is a win-win situation which will cause a stellar paradigm shift, and produce a multi-fold increase in deliverables for turd polishing, and first-order optimal strategies at the end of the day UI great plan! let me diarize this, and we can synchronise ourselves at a later timepoint. When does this sunset? future-proof.",[m
[32m+[m[32m                    broker: 2,[m
[32m+[m[32m                    tags: "Modern"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "32 Prince st",[m
[32m+[m[32m                    city: "Cambridge",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 930000,[m
[32m+[m[32m                    title: "Live in the Trees",[m
[32m+[m[32m                    bedrooms: 5,[m
[32m+[m[32m                    bathrooms: 4,[m
[32m+[m[32m                    long: -71.110448,[m
[32m+[m[32m                    lat: 42.360642,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house04.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house04sq.jpg",[m
[32m+[m[32m                    description: "Distillery meditation before they sold out umami. Typewriter craft beer actually, raw denim gluten-free roof party before they sold out quinoa bitters dreamcatcher tousled ennui vice small batch sartorial.",[m
[32m+[m[32m                    broker: 3,[m
[32m+[m[32m                    tags: "Contemporary"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "211 Charles Street",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 850000,[m
[32m+[m[32m                    title: "Waterfront in the City",[m
[32m+[m[32m                    bedrooms: 3,[m
[32m+[m[32m                    bathrooms: 2,[m
[32m+[m[32m                    long: -71.084454,[m
[32m+[m[32m                    lat: 42.368168,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house05.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house05sq.jpg",[m
[32m+[m[32m                    description: "Green juice 8-bit scenester cupidatat venmo, ramps eu pickled ea cornhole. Odio veniam trust fund, marfa normcore mlkshk kitsch anim culpa distillery vexillologist pinterest consequat. Microdosing commodo stumptown, tote bag pour-over normcore kickstarter.",[m
[32m+[m[32m                    broker: 4,[m
[32m+[m[32m                    tags: "Modern"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "448 Hanover St",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 725000,[m
[32m+[m[32m                    title: "Quiet Retreat",[m
[32m+[m[32m                    bedrooms: 4,[m
[32m+[m[32m                    bathrooms: 2,[m
[32m+[m[32m                    long: -71.052617,[m
[32m+[m[32m                    lat: 42.366855,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house06.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house06sq.jpg",[m
[32m+[m[32m                    description: "Blimey Admiral of the Black Jolly Roger pirate Buccaneer line ballast spirits chantey topmast. Plate Fleet heave down booty Chain Shot nipper spike cutlass furl pinnace bounty. Gabion ahoy piracy coffer killick schooner main sheet holystone careen barque.",[m
[32m+[m[32m                    broker: 5,[m
[32m+[m[32m                    tags: "Colonial"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "127 Endicott St",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 450000,[m
[32m+[m[32m                    title: "City Living",[m
[32m+[m[32m                    bedrooms: 3,[m
[32m+[m[32m                    bathrooms: 1,[m
[32m+[m[32m                    long: -71.057352,[m
[32m+[m[32m                    lat: 42.365003,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house07.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house07sq.jpg",[m
[32m+[m[32m                    description: "Ad placeat sartorial, qui celiac ramps fap lumbersexual cray truffaut meh small batch godard. Single-origin coffee dolore gastropub pickled blue bottle, master cleanse migas cupidatat.",[m
[32m+[m[32m                    broker: 6,[m
[32m+[m[32m                    tags: "Victorian"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "48 Brattle St",[m
[32m+[m[32m                    city: "Cambridge",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 450000,[m
[32m+[m[32m                    title: "Heart of Harvard Square",[m
[32m+[m[32m                    bedrooms: 5,[m
[32m+[m[32m                    bathrooms: 4,[m
[32m+[m[32m                    long: -71.121653,[m
[32m+[m[32m                    lat: 42.374117,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house10.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house10sq.jpg",[m
[32m+[m[32m                    description: "Can you ballpark the cost per unit for me market-facing. Going forward put a record on and see who dances, yet powerpoint Bunny. Moving the goalposts paddle on both sides, or future-proof, yet move the needle Q1 strategic fit, for usabiltiy.",[m
[32m+[m[32m                    broker: 7,[m
[32m+[m[32m                    tags: "Colonial"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "121 Harborwalk Drive",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 450000,[m
[32m+[m[32m                    title: "Seaport District Retreat",[m
[32m+[m[32m                    bedrooms: 3,[m
[32m+[m[32m                    bathrooms: 3,[m
[32m+[m[32m                    long: -71.049327,[m
[32m+[m[32m                    lat: 42.35695,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house09.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house09sq.jpg",[m
[32m+[m[32m                    description: "Anim iPhone eiusmod non normcore, ugh officia. Blog ullamco stumptown, microdosing put a bird on it nihil farm-to-table pour-over squid chillwave seitan activated charcoal. Offal nesciunt lyft odio banjo. Pabst assumenda biodiesel, iPhone ethical veniam paleo in kale chips art party vaporware butcher.",[m
[32m+[m[32m                    broker: 0,[m
[32m+[m[32m                    tags: "Modern"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "503 Park Drive",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 650000,[m
[32m+[m[32m                    title: "City Living",[m
[32m+[m[32m                    bedrooms: 2,[m
[32m+[m[32m                    bathrooms: 2,[m
[32m+[m[32m                    long: -71.105475,[m
[32m+[m[32m                    lat: 42.347400,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house08.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house08sq.jpg",[m
[32m+[m[32m                    description: "Cray kogi small batch edison bulb. Ugh you probably haven't heard of them cold-pressed art party. Nostrud you probably haven't heard of them waistcoat poke cardigan.",[m
[32m+[m[32m                    broker: 1,[m
[32m+[m[32m                    tags: "Modern"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "95 Gloucester St",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 690000,[m
[32m+[m[32m                    title: "Architectural Details",[m
[32m+[m[32m                    bedrooms: 3,[m
[32m+[m[32m                    bathrooms: 3,[m
[32m+[m[32m                    lat: 42.349693,[m
[32m+[m[32m                    long: -71.084407,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house11.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house11sq.jpg",[m
[32m+[m[32m                    description: "Aesthetic neutra raclette retro tofu, laborum hexagon YOLO 3 wolf moon banh mi man braid slow-carb single-origin coffee kale chips. Mustache XOXO authentic 90's keffiyeh, jianbing kinfolk chillwave duis small batch prism.",[m
[32m+[m[32m                    broker: 0,[m
[32m+[m[32m                    tags: "Contemporary"[m
[32m+[m[32m                },[m
[32m+[m[32m                {[m
[32m+[m[32m                    address: "145 Commonwealth Ave",[m
[32m+[m[32m                    city: "Boston",[m
[32m+[m[32m                    state: "MA",[m
[32m+[m[32m                    zip: "02420",[m
[32m+[m[32m                    price: 845000,[m
[32m+[m[32m                    title: "Contemporary Luxury",[m
[32m+[m[32m                    bedrooms: 4,[m
[32m+[m[32m                    bathrooms: 3,[m
[32m+[m[32m                    lat: 42.352466,[m
[32m+[m[32m                    long: -71.075311,[m
[32m+[m[32m                    pic: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house12.jpg",[m
[32m+[m[32m                    thumb: "https://s3-us-west-1.amazonaws.com/sfdc-demo/realty/house12sq.jpg",[m
[32m+[m[32m                    description: "Tunguska event two ghostly white figures in coveralls and helmets are soflty dancing vanquish the impossible kindling the energy hidden in matter brain is the seed of intelligence. A very small stage in a vast cosmic arena rich in mystery hearts of the stars a mote of dust suspended in a sunbeam.",[m
[32m+[m[32m                    broker: 1,[m
[32m+[m[32m                    tags: "Victorian"[m
[32m+[m[32m                }[m
[32m+[m[32m            ];[m
[32m+[m
[32m+[m[32m            function initialize() {[m
[32m+[m[32m                "use strict";[m
[32m+[m
[32m+[m[32m                DreamHouseSampleDataController.deleteAll(function (result, event) {[m
[32m+[m[32m                    if (event.status) {[m
[32m+[m[32m                        load();[m
[32m+[m[32m                    } else {[m
[32m+[m[32m                        alert("Something went wrong deleting existing records");[m
[32m+[m[32m                    }[m
[32m+[m[32m                });[m
[32m+[m
[32m+[m[32m            }[m
[32m+[m
[32m+[m[32m            function load() {[m
[32m+[m[32m                "use strict";[m
[32m+[m
[32m+[m[32m                var broker = new SObjectModel.Broker();[m
[32m+[m[32m                var property = new SObjectModel.Property();[m
[32m+[m
[32m+[m[32m                var propertyIds = new Array();[m
[32m+[m
[32m+[m[32m                for (var i = 0; i < brokers.length; i++) {[m
[32m+[m[32m                    let index = i;[m
[32m+[m[32m                    broker.create(brokers[index], function (err, brokerId) {[m
[32m+[m[32m                        for (var j = 0; j < properties.length; j++) {[m
[32m+[m[32m                            if (properties[j].broker == index) {[m
[32m+[m[32m                                properties[j].name = properties[j].address;[m
[32m+[m[32m                                properties[j].status = "Available";[m
[32m+[m[32m                                properties[j].brokerId = brokerId[0];[m
[32m+[m[32m                                properties[j].assessed = properties[j].price * getRandomNumber(65, 90) / 100;[m
[32m+[m[32m                                properties[j].dateListed = new Date(new Date() - getRandomNumber(3, 50) * 86400000);[m
[32m+[m[32m                                delete properties[j].broker;[m
[32m+[m[32m                                property.create(properties[j], function (err, propertyId) {[m
[32m+[m[32m                                    console.log(err || propertyId);[m
[32m+[m[32m                                    propertyIds.push(propertyId[0]);[m
[32m+[m[32m                                });[m
[32m+[m[32m                            }[m
[32m+[m[32m                        }[m
[32m+[m[32m                    });[m
[32m+[m[32m                }[m
[32m+[m
[32m+[m[32m                alert("Successfully imported " + properties.length + " properties and " + brokers.length + " brokers");[m
[32m+[m[32m            }[m[41m        [m
[32m+[m[32m        </script>[m
[32m+[m[32m    </body>[m
[32m+[m
[32m+[m[32m    </html>[m
[32m+[m[32m</apex:page>[m
\ No newline at end of file[m
[1mdiff --git a/force-app/main/default/pages/DreamHouseSampleData.page-meta.xml b/force-app/main/default/pages/DreamHouseSampleData.page-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..313ff50[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/pages/DreamHouseSampleData.page-meta.xml[m
[36m@@ -0,0 +1,7 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<ApexPage xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <apiVersion>47.0</apiVersion>[m
[32m+[m[32m    <availableInTouch>false</availableInTouch>[m
[32m+[m[32m    <confirmationTokenRequired>false</confirmationTokenRequired>[m
[32m+[m[32m    <label>DreamHouseSampleData</label>[m
[32m+[m[32m</ApexPage>[m
[1mdiff --git a/force-app/main/default/permissionsets/DreamHouse.permissionset-meta.xml b/force-app/main/default/permissionsets/DreamHouse.permissionset-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..bdc8bb6[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/permissionsets/DreamHouse.permissionset-meta.xml[m
[36m@@ -0,0 +1,199 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<PermissionSet xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <applicationVisibilities>[m
[32m+[m[32m        <application>DreamHouse</application>[m
[32m+[m[32m        <visible>true</visible>[m
[32m+[m[32m    </applicationVisibilities>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Broker__c.Email__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Broker__c.Mobile_Phone__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Broker__c.Phone__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Broker__c.Picture_IMG__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Broker__c.Picture__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Broker__c.Title__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Address__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Assessed_Value__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Baths__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Beds__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Broker__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.City__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Date_Agreement__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Date_Closed__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Date_Contracted__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Date_Listed__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Date_Pre_Market__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Property__c.Days_On_Market__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Description__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Location__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Property__c.Picture_IMG__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Picture__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Price__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Property__c.Record_Link__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Property__c.RemoveMe__c</field>[m
[32m+[m[32m        <readable>false</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.State__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Status__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Tags__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>false</editable>[m
[32m+[m[32m        <field>Property__c.Thumbnail_IMG__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Thumbnail__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Title__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <fieldPermissions>[m
[32m+[m[32m        <editable>true</editable>[m
[32m+[m[32m        <field>Property__c.Zip__c</field>[m
[32m+[m[32m        <readable>true</readable>[m
[32m+[m[32m    </fieldPermissions>[m
[32m+[m[32m    <hasActivationRequired>false</hasActivationRequired>[m
[32m+[m[32m    <label>DreamHouse</label>[m
[32m+[m[32m    <objectPermissions>[m
[32m+[m[32m        <allowCreate>true</allowCreate>[m
[32m+[m[32m        <allowDelete>true</allowDelete>[m
[32m+[m[32m        <allowEdit>true</allowEdit>[m
[32m+[m[32m        <allowRead>true</allowRead>[m
[32m+[m[32m        <modifyAllRecords>true</modifyAllRecords>[m
[32m+[m[32m        <object>Broker__c</object>[m
[32m+[m[32m        <viewAllRecords>true</viewAllRecords>[m
[32m+[m[32m    </objectPermissions>[m
[32m+[m[32m    <objectPermissions>[m
[32m+[m[32m        <allowCreate>true</allowCreate>[m
[32m+[m[32m        <allowDelete>true</allowDelete>[m
[32m+[m[32m        <allowEdit>true</allowEdit>[m
[32m+[m[32m        <allowRead>true</allowRead>[m
[32m+[m[32m        <modifyAllRecords>true</modifyAllRecords>[m
[32m+[m[32m        <object>Property__c</object>[m
[32m+[m[32m        <viewAllRecords>true</viewAllRecords>[m
[32m+[m[32m    </objectPermissions>[m
[32m+[m[32m    <tabSettings>[m
[32m+[m[32m        <tab>Broker__c</tab>[m
[32m+[m[32m        <visibility>Visible</visibility>[m
[32m+[m[32m    </tabSettings>[m
[32m+[m[32m    <tabSettings>[m
[32m+[m[32m        <tab>Property__c</tab>[m
[32m+[m[32m        <visibility>Visible</visibility>[m
[32m+[m[32m    </tabSettings>[m
[32m+[m[32m    <tabSettings>[m
[32m+[m[32m        <tab>Sample_Data_Import</tab>[m
[32m+[m[32m        <visibility>Visible</visibility>[m
[32m+[m[32m    </tabSettings>[m
[32m+[m[32m</PermissionSet>[m
[1mdiff --git a/force-app/main/default/tabs/Broker__c.tab-meta.xml b/force-app/main/default/tabs/Broker__c.tab-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..fb87622[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/tabs/Broker__c.tab-meta.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomTab xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <customObject>true</customObject>[m
[32m+[m[32m    <motif>Custom84: Presenter</motif>[m
[32m+[m[32m</CustomTab>[m
[1mdiff --git a/force-app/main/default/tabs/Property__c.tab-meta.xml b/force-app/main/default/tabs/Property__c.tab-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..e9a3cf4[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/tabs/Property__c.tab-meta.xml[m
[36m@@ -0,0 +1,5 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomTab xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <customObject>true</customObject>[m
[32m+[m[32m    <motif>Custom85: Real Estate Sign</motif>[m
[32m+[m[32m</CustomTab>[m
[1mdiff --git a/force-app/main/default/tabs/Sample_Data_Import.tab-meta.xml b/force-app/main/default/tabs/Sample_Data_Import.tab-meta.xml[m
[1mnew file mode 100644[m
[1mindex 0000000..9fdb057[m
[1m--- /dev/null[m
[1m+++ b/force-app/main/default/tabs/Sample_Data_Import.tab-meta.xml[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m<?xml version="1.0" encoding="UTF-8"?>[m
[32m+[m[32m<CustomTab xmlns="http://soap.sforce.com/2006/04/metadata">[m
[32m+[m[32m    <label>Data Import</label>[m
[32m+[m[32m    <motif>Custom19: Wrench</motif>[m
[32m+[m[32m    <page>DreamHouseSampleData</page>[m
[32m+[m[32m</CustomTab>[m
[1mdiff --git a/package.json b/package.json[m
[1mnew file mode 100644[m
[1mindex 0000000..6036983[m
[1m--- /dev/null[m
[1m+++ b/package.json[m
[36m@@ -0,0 +1,43 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "salesforce-app",[m
[32m+[m[32m  "private": true,[m
[32m+[m[32m  "version": "1.0.0",[m
[32m+[m[32m  "description": "Salesforce App",[m
[32m+[m[32m  "scripts": {[m
[32m+[m[32m    "lint": "npm run lint:lwc && npm run lint:aura",[m
[32m+[m[32m    "lint:aura": "eslint **/aura/**",[m
[32m+[m[32m    "lint:lwc": "eslint **/lwc/**",[m
[32m+[m[32m    "test": "npm run test:unit",[m
[32m+[m[32m    "test:unit": "sfdx-lwc-jest",[m
[32m+[m[32m    "test:unit:watch": "sfdx-lwc-jest --watch",[m
[32m+[m[32m    "test:unit:debug": "sfdx-lwc-jest --debug",[m
[32m+[m[32m    "test:unit:coverage": "sfdx-lwc-jest --coverage",[m
[32m+[m[32m    "prettier": "prettier --write \"**/*.{cls,cmp,component,css,html,js,json,md,page,trigger,xml,yaml,yml}\"",[m
[32m+[m[32m    "prettier:verify": "prettier --list-different \"**/*.{cls,cmp,component,css,html,js,json,md,page,trigger,xml,yaml,yml}\""[m
[32m+[m[32m  },[m
[32m+[m[32m  "devDependencies": {[m
[32m+[m[32m    "@prettier/plugin-xml": "^0.12.0",[m
[32m+[m[32m    "@salesforce/eslint-config-lwc": "^0.7.0",[m
[32m+[m[32m    "@salesforce/eslint-plugin-aura": "^1.4.0",[m
[32m+[m[32m    "@salesforce/sfdx-lwc-jest": "^0.9.2",[m
[32m+[m[32m    "eslint": "^7.6.0",[m
[32m+[m[32m    "eslint-config-prettier": "^6.11.0",[m
[32m+[m[32m    "husky": "^4.2.1",[m
[32m+[m[32m    "lint-staged": "^10.0.7",[m
[32m+[m[32m    "prettier": "^2.0.5",[m
[32m+[m[32m    "prettier-plugin-apex": "^1.6.0"[m
[32m+[m[32m  },[m
[32m+[m[32m  "husky": {[m
[32m+[m[32m    "hooks": {[m
[32m+[m[32m      "pre-commit": "lint-staged"[m
[32m+[m[32m    }[m
[32m+[m[32m  },[m
[32m+[m[32m  "lint-staged": {[m
[32m+[m[32m    "**/*.{cls,cmp,component,css,html,js,json,md,page,trigger,xml,yaml,yml}": [[m
[32m+[m[32m      "prettier --write"[m
[32m+[m[32m    ],[m
[32m+[m[32m    "**/{aura|lwc}/**": [[m
[32m+[m[32m      "eslint"[m
[32m+[m[32m    ][m
[32m+[m[32m  }[m
[32m+[m[32m}[m
[1mdiff --git a/scripts/apex/hello.apex b/scripts/apex/hello.apex[m
[1mnew file mode 100644[m
[1mindex 0000000..1fba732[m
[1m--- /dev/null[m
[1m+++ b/scripts/apex/hello.apex[m
[36m@@ -0,0 +1,10 @@[m
[32m+[m[32m// Use .apex files to store anonymous Apex.[m
[32m+[m[32m// You can execute anonymous Apex in VS Code by selecting the[m
[32m+[m[32m//     apex text and running the command:[m
[32m+[m[32m//     SFDX: Execute Anonymous Apex with Currently Selected Text[m
[32m+[m[32m// You can also execute the entire file by running the command:[m
[32m+[m[32m//     SFDX: Execute Anonymous Apex with Editor Contents[m
[32m+[m
[32m+[m[32mstring tempvar = 'Enter_your_name_here';[m
[32m+[m[32mSystem.debug('Hello World!');[m
[32m+[m[32mSystem.debug('My name is ' + tempvar);[m
\ No newline at end of file[m
[1mdiff --git a/scripts/soql/account.soql b/scripts/soql/account.soql[m
[1mnew file mode 100644[m
[1mindex 0000000..10d4b9c[m
[1m--- /dev/null[m
[1m+++ b/scripts/soql/account.soql[m
[36m@@ -0,0 +1,6 @@[m
[32m+[m[32m// Use .soql files to store SOQL queries.[m
[32m+[m[32m// You can execute queries in VS Code by selecting the[m
[32m+[m[32m//     query text and running the command:[m
[32m+[m[32m//     SFDX: Execute SOQL Query with Currently Selected Text[m
[32m+[m
[32m+[m[32mSELECT Id, Name FROM Account[m
[1mdiff --git a/sfdx-project.json b/sfdx-project.json[m
[1mnew file mode 100644[m
[1mindex 0000000..1ac36e6[m
[1m--- /dev/null[m
[1m+++ b/sfdx-project.json[m
[36m@@ -0,0 +1,11 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "packageDirectories": [[m
[32m+[m[32m    {[m
[32m+[m[32m      "path": "force-app",[m
[32m+[m[32m      "default": true[m
[32m+[m[32m    }[m
[32m+[m[32m  ],[m
[32m+[m[32m  "namespace": "",[m
[32m+[m[32m  "sfdcLoginUrl": "https://login.salesforce.com",[m
[32m+[m[32m  "sourceApiVersion": "51.0"[m
[32m+[m[32m}[m
