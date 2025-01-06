verdiDockWidgetDisplay -dock widgetDock_<Signal_List>
debImport "-f" "filelist"
debLoadSimResult /mnt/cache/tb.fsdb
wvCreateWindow
srcHBSelect "tb.u_cache_controller.cache" -win $_nTrace1
srcSignalView -on
srcHBSelect "tb.u_cache_controller.cache" -win $_nTrace1
srcSignalViewSelect "tb.mem_addr\[31:0\]"
srcSignalViewSelect "tb.rd"
srcSignalViewSelect "tb.wr"
srcHBSelect "tb.u_cache_controller.cache" -win $_nTrace1
srcSetScope -win $_nTrace1 "tb.u_cache_controller.cache" -delim "."
srcHBSelect "tb.u_cache_controller.cache" -win $_nTrace1
srcHBSelect "tb.u_cache_controller.cache" -win $_nTrace1
srcSignalViewGotoPage 2
srcSignalViewGotoPage 3
srcSignalViewGotoPage 4
srcSignalViewGotoPage 5
srcSignalViewGotoPage 6
srcSignalViewGotoPage 7
srcSignalViewGotoPage 8
srcSignalViewGotoPage 9
srcSignalViewGotoPage 10
srcSignalViewGotoPage 11
srcSignalViewGotoPage 12
srcSignalViewGotoPage 13
srcSignalViewGotoPage 14
srcSignalViewGotoPage 15
srcSignalViewGotoPage 16
srcSignalViewGotoPage 17
srcSignalViewGotoPage 16
srcSignalViewGotoPage 15
srcSignalViewGotoPage 14
srcSignalViewGotoPage 13
srcSignalViewGotoPage 12
srcSignalViewGotoPage 11
srcSignalViewGotoPage 10
srcSignalViewGotoPage 9
srcSignalViewGotoPage 8
srcSignalViewGotoPage 7
srcSignalViewGotoPage 6
srcSignalViewGotoPage 5
srcSignalViewGotoPage 6
srcSignalViewGotoPage 7
srcSignalViewGotoPage 8
srcSignalViewGotoPage 9
srcSignalViewGotoPage 10
srcSignalViewGotoPage 11
srcSignalViewGotoPage 12
srcSignalViewGotoPage 13
srcSignalViewGotoPage 14
srcSignalViewGotoPage 15
srcSignalViewGotoPage 16
srcSignalViewGotoPage 17
srcSignalViewGotoPage 16
srcSignalViewGotoPage 15
srcSignalViewGotoPage 14
srcSignalViewGotoPage 13
srcSignalViewGotoPage 12
srcSignalViewGotoPage 11
srcSignalViewGotoPage 10
srcSignalViewGotoPage 9
srcSignalViewGotoPage 8
srcSignalViewGotoPage 7
srcSignalViewGotoPage 6
srcSignalViewGotoPage 5
srcSignalViewGotoPage 4
srcSignalViewGotoPage 3
srcSignalViewGotoPage 2
srcSignalViewGotoPage 1
debExit
