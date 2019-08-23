head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8">
    <meta name="X-Csrf-Token" content="20161670b921a1cf6b1e1bff0f0b15a7"/>
    <meta id="viewport" name="viewport" content="width=device-width, initial-scale=0.01"/>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery-1.8.3.js"></script>
    <script type="application/javascript">
        window.standaloneContest = false;
        function adjustViewport() {
            var screenWidthPx = Math.min($(window).width(), window.screen.width);
            var siteWidthPx = 1100; // min width of site
            var ratio = Math.min(screenWidthPx / siteWidthPx, 1.0);
            var viewport = "width=device-width, initial-scale=" + ratio;
            $('#viewport').attr('content', viewport);
            var style = $('<style>html * { max-height: 1000000px; }</style>');
            $('html > head').append(style);
        }

        if ( /Android|webOS|iPhone|iPad|iPod|BlackBerry/i.test(navigator.userAgent) ) {
            adjustViewport();
        }
    </script>
    <meta http-equiv="pragma" content="no-cache">
    <meta http-equiv="expires" content="-1">
    <meta http-equiv="profileName" content="f3">
    <meta name="google-site-verification" content="OTd2dN5x4nS4OPknPI9JFg36fKxjqY0i1PSfFPv_J90"/>
    <meta property="fb:admins" content="100001352546622" />
    <meta property="og:image" content="//sta.codeforces.com/s/12838/images/codeforces-telegram-square.png" />
    <link rel="image_src" href="//sta.codeforces.com/s/12838/images/codeforces-telegram-square.png" />
    <meta property="og:title" content="Submission #48108810 - Codeforces"/>
    <meta property="og:description" content=""/>
    
    <meta property="og:site_name" content="Codeforces"/>
    
    
    
    <meta name="cc" content="92eaaae48f7cb96b0b834e4f8cd6f8955c8b08f3"/>
    
    
    <meta name="utc_offset" content="+03:00"/>
    <meta name="verify-reformal" content="f56f99fd7e087fb6ccb48ef2" />
    <title>Submission #48108810 - Codeforces</title>
        <meta name="description" content="Codeforces. Programming competitions and contests, programming community" />
        <meta name="keywords" content="programming algorithm contest competition informatics olympiads c++ java graphs vkcup" />
    <meta name="robots" content="index, follow" />

    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/font-awesome.min.css" type="text/css" charset="utf-8" />

        <link href='//fonts.googleapis.com/css?family=PT+Sans+Narrow:400,700&subset=latin,cyrillic' rel='stylesheet' type='text/css'>
        <link href='//fonts.googleapis.com/css?family=Cuprum&subset=latin,cyrillic' rel='stylesheet' type='text/css'>


    <link rel="shortcut icon" type="image/png" href="//sta.codeforces.com/s/12838/favicon.png">

    <!--CombineResourcesFilter-->
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/prettify.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/clear.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/ttypography.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/problem-statement.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/second-level-menu.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/roundbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/datatable.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/table-form.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/topic.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/jquery.jgrowl.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/facebox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/jquery.wysiwyg.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/jquery.autocomplete.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/codeforces.datepick.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/colorbox.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/jquery.drafts.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/status.css" type="text/css" charset="utf-8" />
        <link rel="stylesheet" href="//sta.codeforces.com/s/12838/css/community.css" type="text/css" charset="utf-8" />

    <!-- MathJax -->
    <script type="text/x-mathjax-config">
    MathJax.Hub.Config({
      tex2jax: {inlineMath: [['$$$','$$$']], displayMath: [['$$$$$$','$$$$$$']]}
    });
    </script>
    <script type="text/javascript" async
            src="https://assets.codeforces.com/mathjax/MathJax.js?config=TeX-AMS_HTML-full"
    >
    </script>
    <!-- /MathJax -->

    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/prettify/prettify.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/moment-with-locales.min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/pushstream.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.easing.min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.lavalamp.min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.jgrowl.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.swipe.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/facebox.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.wysiwyg.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/controls/wysiwyg.colorpicker.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/controls/wysiwyg.table.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/controls/wysiwyg.image.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/controls/wysiwyg.link.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.autocomplete.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.datepick.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.ie6blocker.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.colorbox-min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.ba-bbq.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/jquery.drafts.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/clipboard.min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/autosize.min.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/sjcl.js"></script>
    <script type="text/javascript" src="/scripts/7cf9e45c94702e55e556782939679b21/en/codeforces-options.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/codeforces.js?v=20160131"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/EventCatcher.js?v=20160131"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/js/preparedVerdictFormats-en.js"></script>
    <!--/CombineResourcesFilter-->

    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/markitup/skins/markitup/style.css" type="text/css" charset="utf-8" />
    <link rel="stylesheet" href="//sta.codeforces.com/s/12838/markitup/sets/markdown/style.css" type="text/css" charset="utf-8" />


    <script type="text/javascript" src="//sta.codeforces.com/s/12838/markitup/jquery.markitup.js"></script>
    <script type="text/javascript" src="//sta.codeforces.com/s/12838/markitup/sets/markdown/set.js"></script>

    <!--[if IE]>
    <style>
        #sidebar {
            padding-left: 1em;
            margin: 1em 1em 1em 0;
        }
    </style>
    <![endif]-->



</head>
<body><span style='display:none;' class='csrf-token' data-csrf='20161670b921a1cf6b1e1bff0f0b15a7'>&nbsp;</span>
<div class="button-up" style="display: none; opacity: 0.7; width: 50px; height:100%; position: fixed; left: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 3.0rem;"><i class="icon-circle-arrow-up"></i></div>
<div class="verdictPrototypeDiv" style="display: none;"></div>

<!-- Codeforces JavaScripts. -->
<script type="text/javascript">
    String.prototype.hashCode = function() {
        var hash = 0, i, chr;
        if (this.length === 0) return hash;
        for (i = 0; i < this.length; i++) {
            chr   = this.charCodeAt(i);
            hash  = ((hash << 5) - hash) + chr;
            hash |= 0; // Convert to 32bit integer
        }
        return hash;
    };

    var queryMobile = Codeforces.queryString.mobile;
    if (queryMobile === "true" || queryMobile === "false") {
        Codeforces.putToStorage("useMobile", queryMobile == "true");
    } else {
        var useMobile = Codeforces.getFromStorage("useMobile");
        if (useMobile === true || useMobile === false) {
            if (useMobile != false) {
                Codeforces.redirect(Codeforces.updateUrlParameter(document.location.href, "mobile", useMobile));
            }
        }
    }
</script>
<script type="text/javascript">
    if (window.parent.frames.length > 0) {
        window.stop();
    }
</script>


<script type="text/javascript">
    window.fbAsyncInit = function() {
        FB.init({
            appId      : '554666954583323',
            xfbml      : true,
            version    : 'v2.8'
        });
        FB.AppEvents.logPageView();
    };

    (function(d, s, id){
        var js, fjs = d.getElementsByTagName(s)[0];
        if (d.getElementById(id)) {return;}
        js = d.createElement(s); js.id = id;
        js.src = "//connect.facebook.net/en_US/sdk.js";
        fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
</script>


    <script type="text/javascript">
        $(document).ready(function () {
    (function () {
        jQuery.expr[':'].containsCI = function(elem, index, match) {
            return !match || !match.length || match.length < 4 || !match[3] || (
                    elem.textContent || elem.innerText || jQuery(elem).text() || ''
            ).toLowerCase().indexOf(match[3].toLowerCase()) >= 0;
        }
    }(jQuery));

    $.ajaxPrefilter(function(options, originalOptions, xhr) {
        var csrf = Codeforces.getCsrfToken();

        if (csrf) {
            var data = originalOptions.data;
            if (originalOptions.data !== undefined) {
                if (Object.prototype.toString.call(originalOptions.data) === '[object String]') {
                    data = $.deparam(originalOptions.data);
                }
            } else {
                data = {};
            }
            options.data = $.param($.extend(data, { csrf_token: csrf }));
        }
    });

    window.getCodeforcesServerTime = function(callback) {
        $.post("/data/time", {}, callback, "json");
    }

    window.updateTypography = function () {
        $("div.ttypography code").addClass("tt");
        $("div.ttypography pre>code").addClass("prettyprint").removeClass("tt");
        $("div.ttypography table").addClass("bordertable");
        prettyPrint();
    }

    $.ajaxSetup({ scriptCharset: "utf-8" ,contentType: "application/x-www-form-urlencoded; charset=UTF-8", headers: {
        'X-Csrf-Token': Codeforces.getCsrfToken()
    }});

    window.updateTypography();

    Codeforces.signForms();

    setTimeout(function() {
        $(".second-level-menu-list").lavaLamp({
            fx: "backout",
            speed: 1000
        });
    }, 0);


    Codeforces.countdown();
    $("a[rel='photobox']").colorbox();


    function showAnnouncements(json) {
        //info("j=" + JSON.stringify(json));

        if (json.t != "a") {
            return;
        }
        // console.log("Got announcement from channel");
        setTimeout(function() {
            Codeforces.showAnnouncements(json.d, "en");
        }, Math.random() * 500);
    }

    function showEventCatcherUserMessage(json) {
        if (json.t == "s") {
            var points = json.d[5];
            var passedTestCount = json.d[7];
            var judgedTestCount = json.d[8];
            var verdict = preparedVerdictFormats[json.d[12]];
            var verdictPrototypeDiv = $(".verdictPrototypeDiv");
            verdictPrototypeDiv.html(verdict);
            if (judgedTestCount != null && judgedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-judged").text(judgedTestCount);
            }
            if (passedTestCount != null && passedTestCount != undefined) {
                verdictPrototypeDiv.find(".verdict-format-passed").text(passedTestCount);
            }
            if (points != null && points != undefined) {
                verdictPrototypeDiv.find(".verdict-format-points").text(points);
            }
            Codeforces.showMessage(verdictPrototypeDiv.text());
        }
    }

    $(".clickable-title").each(function() {
        var title = $(this).attr("data-title");
        if (title) {
            var tmp = document.createElement("DIV");
            tmp.innerHTML = title;
            $(this).attr("title", tmp.textContent || tmp.innerText || "");
        }
    });

    $(".clickable-title").click(function() {
        var title = $(this).attr("data-title");
        if (title) {
            Codeforces.alert(title);
        } else {
            Codeforces.alert($(this).attr("title"));
        }
    }).css("position", "relative").css("bottom", "3px");


    Codeforces.reformatTimes();

    //Codeforces.initializePubSub();
    if (window.codeforcesOptions.subscribeServerUrl) {
        window.eventCatcher = new EventCatcher(
            window.codeforcesOptions.subscribeServerUrl,
            [
                Codeforces.getGlobalChannel(),
                Codeforces.getUserChannel(),
                Codeforces.getUserShowMessageChannel(),
                Codeforces.getContestChannel(),
                Codeforces.getParticipantChannel(),
                Codeforces.getTalkChannel()
            ]
        );

        if (Codeforces.getParticipantChannel()) {
            window.eventCatcher.subscribe(Codeforces.getParticipantChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getContestChannel()) {
            window.eventCatcher.subscribe(Codeforces.getContestChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getGlobalChannel()) {
            window.eventCatcher.subscribe(Codeforces.getGlobalChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserChannel(), function(json) {
                showAnnouncements(json);
            });
        }

        if (Codeforces.getUserShowMessageChannel()) {
            window.eventCatcher.subscribe(Codeforces.getUserShowMessageChannel(), function(json) {
                showEventCatcherUserMessage(json);
            });
        }
    }

    Codeforces.setupContestTimes("/data/contests");
    Codeforces.setupSpoilers();
    Codeforces.setupTutorials("/data/problemTutorial");
        });
    </script>

<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-743380-5']);
  _gaq.push(['_trackPageview']);

  (function () {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = (document.location.protocol == 'https:' ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>


<div id="body">
        

<div class="side-bell" style="visibility: hidden; display: none; opacity: 0.7; width: 40px; position: fixed; right: 0; top: 0; cursor: pointer; text-align: center; line-height: 35px; color: #d3dbe4; font-weight: bold; font-size: 1.5rem;">
    <span class="icon-stack" style="width: 100%;">
        <i class="icon-circle icon-stack-base"></i>
        <i class="icon-bell-alt icon-light"></i>
    </span>
    <br/>
    <span class="side-bell__count" style="position: relative; top: -10px;"></span>
</div>


<div id="header" style="position: relative;">
    <div style="float:left;">
            <a href="/"><img src="//sta.codeforces.com/s/12838/images/codeforces-logo-with-telegram.png"/></a>
    </div>
    <div class="lang-chooser">
        <div style="text-align: right;">
            <a href="?locale=en"><img src="//sta.codeforces.com/s/12838/images/flags/24/gb.png" title="In English" alt="In English"/></a>
            <a href="?locale=ru"><img src="//sta.codeforces.com/s/12838/images/flags/24/ru.png" title="По-русски" alt="По-русски"/></a>
        </div>

        <div >
                        <a href="/enter?back=%2Fcontest%2F108%2Fsubmission%2F48108810">Enter</a>
                     | 
                        <a href="/register">Register</a>
                    
        </div>



    </div>
    <br style="clear: both;"/>
</div>
        

    <div class="roundbox menu-box" style="">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
            <div class="roundbox-lb">&nbsp;</div>
            <div class="roundbox-rb">&nbsp;</div>
    <div class="menu-list-container">
    <ul class="menu-list main-menu-list">
                <li class=""><a href="/">Home</a></li>
                <li class=""><a href="/top">Top</a></li>
                <li class="current"><a href="/contests">Contests</a></li>
                <li class=""><a href="/gyms">Gym</a></li>
                <li class=""><a href="/problemset">Problemset</a></li>
                <li class=""><a href="/groups">Groups</a></li>
                <li class=""><a href="/ratings">Rating</a></li>
                <li class=""><a href="/api/help">API</a></li>
                <li class=""><a href="/help">Help</a></li>
                <li class=""><a href="/calendar">Calendar</a></li>
    </ul>
        <form method="post" action="/search"><input type='hidden' name='csrf_token' value='20161670b921a1cf6b1e1bff0f0b15a7'/>
            <input class="search" name="query" data-isPlaceholder="true" value=""/>
        </form>
    <br style="clear: both;"/>
</div>

    </div>

    <script type="text/javascript">
        $(document).ready(function () {
            $("input.search").focus(function () {
                if ($(this).attr("data-isPlaceholder") === "true") {
                    $(this).val("");
                    $(this).removeAttr("data-isPlaceholder");
                }
            });
        });
    </script>
            <br style="height: 3em; clear: both;"/>

        <div style="position: relative;">
                <div id="pageContent">
                    <div class="second-level-menu">
<ul class="second-level-menu-list">
        <li><a
                                        href="/contest/108">Problems</a></li>
        <li><a
                                        href="/contest/108/submit">Submit Code</a></li>
        <li><a
                                        href="/contest/108/my">My Submissions</a></li>
        <li class="current selectedLava"><a
                                        href="/contest/108/status">Status</a></li>
        <li><a
                                        href="/contest/108/hacks">Hacks</a></li>
        <li><a
                                        href="/contest/108/room/1">Room</a></li>
        <li><a
                                        href="/contest/108/standings">Standings</a></li>
        <li><a
                                        href="/contest/108/customtest">Custom Invocation</a></li>
</ul>
</div>

    <style>
        .diagnosticsResultMessage {
            font-weight: bold;
            margin: 1em 0 0;
        }

        .diagnosticsResultMessage .diagnosticsMessageType {
            color: #E65100;
        }

        .source-copier {
            font-size: 1.2rem;
            float: right;
            color: #888 !important;
            cursor: pointer;
            border: 1px solid rgb(185, 185, 185);
            padding: 3px;
            margin: 1px;
            margin-right: 3px;
            line-height: 1.1rem;
            text-transform: none;
        }

        .source-copier:hover {
            background-color: #def;
        }
    </style>



<div class="datatable"
     
     style="background-color: #E1E1E1; padding-bottom: 3px;">
            <div class="lt">&nbsp;</div>
            <div class="rt">&nbsp;</div>
            <div class="lb">&nbsp;</div>
            <div class="rb">&nbsp;</div>

            <div style="padding: 4px 0 0 6px;font-size:1.4rem;position:relative;">
                General

                <div style="position:absolute;right:0.25em;top:0.35em;">
                    <span style="padding:0;position:relative;bottom:2px;" class="rowCount"></span>

                    <img class="closed" src="//sta.codeforces.com/s/12838/images/icons/control.png"/>

                    <span class="filter" style="display:none;">
                        <img class="opened" src="//sta.codeforces.com/s/12838/images/icons/control-270.png"/>
                        <input style="padding:0;position:relative;bottom:2px;border:1px solid #aaa;height:17px;font-size:1.3rem;"/>
                    </span>
                </div>
            </div>
            <div style="background-color: white;margin:0.3em 3px 0 3px;position:relative;">
            <div class="ilt">&nbsp;</div>
            <div class="irt">&nbsp;</div>
            <table class="">
<tr>
    <th style="width:2em;">#</th>
    <th style="width:12em;">Author</th>
    <th style="width:2em;">Problem</th>
    <th style="width:2em;">Lang</th>
    <th style="width:8em;">Verdict</th>
        <th style="width:2em;">Time</th>
        <th style="width:2em;">Memory</th>
    <th style="width:4em;">Sent</th>
    <th style="width:4em;">Judged</th>
    <th style="width:4em;">&nbsp;</th>
</tr>
<tr>
    <td>48108810</td>
    <td>
            Practice:<br/>
<a href="/profile/Prosaic_26" title="Specialist Prosaic_26" class="rated-user user-cyan">Prosaic_26</a>    </td>
    <td>
        <a title="A - Palindromic Times" href="/contest/108/problem/A">108A</a>
         - <span title="problem revision">16</span>
    </td>
    <td>
    GNU C++14
    </td>
    <td>
    <span class='verdict-accepted'>Accepted</span>
    </td>
        <td>
            60 ms
        </td>
        <td>
            8 KB
        </td>
    <td>2019-01-09 10:47:29</td>
    <td>2019-01-09 10:47:29</td>
    <td>
        <button style="padding: 0.05em; width: 80px;" class="showDiff" title="Compare">Compare</button>
    </td>
</tr>
            </table>
            </div>
        </div>
    <script type="text/javascript">
        $(document).ready(function () {
                // Create new ':containsIgnoreCase' selector for search
                jQuery.expr[':'].containsIgnoreCase = function(a, i, m) {
                    return jQuery(a).text().toUpperCase()
                            .indexOf(m[3].toUpperCase()) >= 0;
                };

                if (window.updateDatatableFilter == undefined) {
                    window.updateDatatableFilter = function(i) {
                        var parent = $(i).parent().parent().parent().parent();
                        $("tr.no-items", parent).remove();
                        $("tr", parent).hide().removeClass('visible');
                        var text = $(i).val();
                        if (text) {
                            $("tr" + ":containsIgnoreCase('" + text + "')", parent).show().addClass('visible');
                        } else {
                            parent.find(".rowCount").text("");
                            $("tr", parent).show().addClass('visible');
                        }

                        var found = false;
                        var visibleRowCount = 0;
                        $("tr", parent).each(function () {
                            if (!found) {
                                if ($(this).find("th").size() > 0) {
                                    $(this).show().addClass('visible');
                                    found = true;
                                }
                            }
                            if ($(this).hasClass('visible')) {
                                visibleRowCount++;
                            }
                        });
                        if (text) {
                            parent.find(".rowCount").text("Matches: " + (visibleRowCount - (found ? 1 : 0)));
                        }
                        if (visibleRowCount == (found ? 1 : 0)) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo($(parent).find('table'));
                        }
                        $(parent).find("tr td").removeClass("dark");
                        $(parent).find("tr.visible:odd td").addClass("dark");
                    }

                    $(".datatable .closed").click(function () {
                        var parent = $(this).parent();
                        $(this).hide();
                        $(".filter", parent).fadeIn(function () {
                            $("input", parent).val("").focus().css("border", "1px solid #aaa");
                        });
                    });

                    $(".datatable .opened").click(function () {
                        var parent = $(this).parent().parent();
                        $(".filter", parent).fadeOut(function () {
                            $(".closed", parent).show();
                            $("input", parent).val("").each(function () {
                                window.updateDatatableFilter(this);
                            });
                        });
                    });

                    $(".datatable .filter input").keyup(function(e) {
                        window.updateDatatableFilter(this);
                        e.preventDefault();
                        e.stopPropagation();
                    });

                    $(".datatable table").each(function () {
                        var found = false;
                        $("tr", this).each(function () {
                            if (!found && $(this).find("th").size() == 0) {
                                found = true;
                            }
                        });
                        if (!found) {
                            $("<tr class='no-items visible'><td style=\"text-align:left;\"colspan=\"32\">No items<\/td><\/tr>").appendTo(this);
                        }
                    });

                    // Applies styles to datatables.
                    $(".datatable").each(function () {
                        $(this).find("tr:first th").addClass("top");
                        $(this).find("tr:last td").addClass("bottom");
                        $(this).find("tr:odd td").addClass("dark");
                        $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                        $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                    });

                    $(".datatable table.tablesorter").each(function () {
                        $(this).bind("sortEnd", function () {
                            $(".datatable").each(function () {
                                $(this).find("th, td")
                                    .removeClass("top").removeClass("bottom")
                                    .removeClass("left").removeClass("right")
                                    .removeClass("dark");
                                $(this).find("tr:first th").addClass("top");
                                $(this).find("tr:last td").addClass("bottom");
                                $(this).find("tr:odd td").addClass("dark");
                                $(this).find("tr td:first-child, tr th:first-child").addClass("left");
                                $(this).find("tr td:last-child, tr th:last-child").addClass("right");
                            });
                        });
                    });
                }
        });
    </script>

    <div class="roundbox SubmissionDetailsFrameRoundBox-48108810" style="margin-top:2em;font-size:1.1rem;">
            <div class="roundbox-lt">&nbsp;</div>
            <div class="roundbox-rt">&nbsp;</div>
        <div class="caption titled">&rarr; Source
            <div class="top-links">
            </div>
        </div>
    <pre id="program-source-text" class="prettyprint lang-cpp linenums program-source" style="padding: 0.5em;">#include<bits/stdc++.h> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define forn(i,o,n) for(int i=o;i<n;i++)
#define int long long
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];
 

    for (int i = 0; i < n; i++) 
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++) 
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
bool isPrime(int n){
    forn(i,2,sqrt(n)+1){
        if(n%i==0)
         return 0;
      //   cout<<i;
    }
    return 1;
}

int32_t main(){
    IOS;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout); 
    string s;
    cin>>s;
    int n;
    n=(int)s[4]-48;
    n+=((int)s[3]-48)*10;
    n+=((int)s[1]-48)*100;
    n+=((int)s[0]-48)*1000;
    while(1){
    	if(n%100==59){
    		n/=100;
    		n*=100;
    		if(n/100==23)
    			n%=100;
    		else
    			n+=100;
    	}
    	else
    		n++;
    	if(n/1000==n%10&&((n/100)%10)==(n%100)/10){
    		break;
    	}
    }
    if(n/10==0){
    	cout<<"00:0"<<n;
    }
    else if(n/100==0){
    	cout<<"00:"<<n;
    }
    else if(n/1000==0){
    	cout<<"0"<<n/100<<":";
    	if((n%100)/10==0) cout<<0<<n%100;
    	else cout<<n%100;
    }
    else{
    	cout<<n/100<<":";
    	if((n%100)/10==0) cout<<0<<n%100;
    	else cout<<n%100;
    }
}