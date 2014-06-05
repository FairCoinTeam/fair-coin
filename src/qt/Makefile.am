include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = FairCoin-qt
noinst_LIBRARIES = libbitcoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# bitcoin qt core #
QT_TS = \
  locale/bitcoin_en.ts \
  locale/bitcoin_ru.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/optionsdialog.ui \
  forms/editaddressdialog.ui \
  forms/overviewpage.ui \
  forms/qrcodedialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_aboutdialog.cpp \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_bitcoinaddressvalidator.cpp \
  moc_bitcoinamountfield.cpp \
  moc_bitcoingui.cpp \
  moc_bitcoinunits.cpp \
  moc_clientmodel.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_macdockiconhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_qtipcserver.cpp \
  moc_qrcodedialog.cpp \
  moc_walletmodel.cpp

BITCOIN_MM =

QT_MOC = \
  bitcoin.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_bitcoin.cpp
QT_QRC = bitcoin.qrc

BITCOIN_QT_H = \
  aboutdialog.h \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  bitcoinaddressvalidator.h \
  bitcoinamountfield.h \
  bitcoingui.h \
  bitcoinunits.h \
  clientmodel.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  macdockiconhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  qrcodedialog.h \
  qtipcserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  transactiondescdialog.h \
  transactiondesc.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  walletmodel.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/faircoin.ico \
  res/icons/faircoin.png \
  res/icons/faircoin_testnet.png \
  res/icons/faircoin_testnet.ico \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar_faircoin.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

BITCOIN_QT_CPP = \
  bitcoin.cpp \
  bitcoinaddressvalidator.cpp \
  bitcoinamountfield.cpp \
  bitcoingui.cpp \
  bitcoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp

if ENABLE_WALLET
BITCOIN_QT_CPP += \
  aboutdialog.cpp \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  editaddressdialog.cpp \
  overviewpage.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  qtipcserver.cpp \
  qrcodedialog.cpp \
  walletmodel.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png \
  res/images/wallet_bgcoin.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

BITCOIN_RC = res/bitcoin-qt-res.rc

libbitcoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libbitcoinqt_a_SOURCES = $(BITCOIN_QT_CPP) $(BITCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libbitcoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libbitcoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# bitcoin-qt binary #
FairCoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
FairCoin_qt_SOURCES = bitcoin.cpp
if TARGET_DARWIN
  FairCoin_qt_SOURCES += $(BITCOIN_MM)
endif
if TARGET_WINDOWS
  FairCoin_qt_SOURCES += $(BITCOIN_RC)
endif
FairCoin_qt_LDADD = libbitcoinqt.a $(LIBBITCOIN_SERVER)
if ENABLE_WALLET
FairCoin_qt_LDADD += $(LIBBITCOIN_WALLET)
endif
FairCoin_qt_LDADD += $(LIBBITCOIN_COMMON) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(BDB_LIBS)
FairCoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.ui -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

bitcoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/bitcoinstrings.cpp

translate: bitcoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(BITCOIN_QT_CPP) $(BITCOIN_QT_H) $(BITCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/bitcoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name bitcoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
