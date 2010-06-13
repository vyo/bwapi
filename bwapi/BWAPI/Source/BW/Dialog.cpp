#include "Dialog.h"

BYTE gbTinyBtnGfx[3][12*12] = {
  {
    0x00, 0x00, 0x00, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x7B, 0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B, 0x7B, 0x00, 0x00,
    0x00, 0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B, 0x00,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B,
    0x00, 0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B, 0x00,
    0x00, 0x00, 0x7B, 0x7B, 0x2B, 0x2B, 0x2B, 0x2B, 0x7B, 0x7B, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xA5, 0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5, 0xA5, 0x00, 0x00,
    0x00, 0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5, 0x00,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5,
    0x00, 0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5, 0x00,
    0x00, 0x00, 0xA5, 0xA5, 0x2B, 0x2B, 0x2B, 0x2B, 0xA5, 0xA5, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0xA5, 0x00, 0x00, 0x00
  },
  {
    0x00, 0x00, 0x00, 0xC7, 0xC7, 0xC7, 0xC7, 0xC7, 0xC7, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xC7, 0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7, 0xC7, 0x00, 0x00,
    0x00, 0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7, 0x00,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7,
    0x00, 0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7, 0x00,
    0x00, 0x00, 0xC7, 0xC7, 0x2B, 0x2B, 0x2B, 0x2B, 0xC7, 0xC7, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC7, 0xC7, 0xC7, 0xC7, 0xC7, 0xC7, 0x00, 0x00, 0x00
  }
};

namespace BW
{
  // ------------------ TEMPLATE ---------------------
  bool __fastcall InteractTemplate(dialog *dlg, dlgEvent *evt)
  {
    char out[512];
    switch (evt->wNo)
    {
    case 0: // Key down
      break;
    case 1: // Key repeat
      break;
    case 2: // Key Modifier?? Key up?
      break;
    case 3: // Mouse update/Move
      break;
    case 4: // Left Button down
      break;
    case 5: // Left Button up
      break;
    case 6: // Left Button double click
      break;
    case 7: // Right Button Down
      break;
    case 8: // Right Button Up
      break;
    case 9: // Right Button double click
      break;
    case 10: // Middle Button Down
      break;
    case 11: // Middle Button Up
      break;
    case 12: // Middle Button double click
      break;
    case 13: // unknown; Loop? Always? Dialog only?
      break;
    case 14: // Control (used for when a control has been pressed)
      switch(evt->dwUser)
      {
      case 0: // Initialize
        break;
      case 1: // Kill
        break;
      case 2: // Activate
        break;
      case 3: // Press Hotkey
        break;
      case 4: // MouseOver
        break;
      case 5: // Select Previous
        break;
      case 6: // Select Next
        break;
      case 7: // Initialize dialog
        break;
      case 8: // Unk Init control
        break;
      case 9: // MouseEnter
        break;
      case 10: // Initialize children
        break;
      case 11: // Unknown Init control
        break;
      case 13: // Show
        break;
      case 14: // Hide
        break;
      default:
        sprintf_s(out, 512, "Event: %d\nUser: 0x%p", evt->wNo, evt->dwUser);
        MessageBoxA(NULL, out, "!", MB_OK);
        break;
      }
      break;
    case 15: // User Key press
      break;
    case 17: // Mouse wheel Scroll up
      break;
    case 18: // Mouse wheel Scroll down
      break;
    default:
      sprintf_s(out, 512, "Unknown Event: %d\nUser: 0x%p", evt->wNo, evt->dwUser);
      MessageBoxA(NULL, out, "!", MB_OK);
      break;
    }
    return dlg->DefaultInteract(evt);
  }
  // ------------------ BUTTON INTERACT --------------
  bool __fastcall TinyButtonInteract(dialog *dlg, dlgEvent *evt)
  {
    switch (evt->wNo)
    {
    case 2:
    case 5: // Left Button up
      dlg->srcBits.data = gbTinyBtnGfx[0];
      break;
    case 4:
    case 6: // Left Button down
      dlg->srcBits.data = gbTinyBtnGfx[2];
      break;
    case 14: // Control (used for when a control has been pressed)
      switch(evt->dwUser)
      {
      case 2: // Activate
        switch (dlg->wIndex)
        {
        case 255: // minimize
          if ( (WORD)dlg->lUser )
          {
            dlg->Parent()->srcBits.ht = (WORD)dlg->lUser;
            dlg->Parent()->rct.Ymax = dlg->Parent()->rct.Ymin + dlg->Parent()->srcBits.ht - 1;
            dlg->Parent()->u.dlg.dstBits.ht = dlg->Parent()->srcBits.ht;
            dlg->lUser = 0;
          }
          else
          {
            dlg->lUser = dlg->Parent()->srcBits.ht;
            dlg->Parent()->srcBits.ht = 13;
            dlg->Parent()->rct.Ymax = dlg->Parent()->rct.Ymin + dlg->Parent()->srcBits.ht - 1;
            dlg->Parent()->u.dlg.dstBits.ht = dlg->Parent()->srcBits.ht;
          }
          break;
        }
        break;
      case 4: // mouseOver
        dlg->srcBits.data = gbTinyBtnGfx[1];
        break;
      case 3: // hotkey
      case 5:
      case 6: // Select Previous/Next
        return false;
      }
      break;
    }
    return dlg->DefaultInteract(evt);
  }
  // ------------------ WINDOW INTERACT --------------
  bool __fastcall WindowInteract(dialog *dlg, dlgEvent *evt)
  {
    pt *mouseOffset = (pt*)&dlg->lUser;
    dialog *i;
    switch (evt->wNo)
    {
    case 3: // Mouse update/Move
      if ( dlg->wUnk_0x1E )
      {
        dlg->rct.Xmin = evt->cursor.x - mouseOffset->x;
        dlg->rct.Xmax = dlg->rct.Xmin + dlg->srcBits.wid - 1;
        dlg->rct.Ymin = evt->cursor.y - mouseOffset->y;
        dlg->rct.Ymax = dlg->rct.Ymin + dlg->srcBits.ht - 1;
        if ( dlg->rct.Xmin < 0 )
        {
          dlg->rct.Xmax -= dlg->rct.Xmin;
          dlg->rct.Xmin -= dlg->rct.Xmin;
        }
        if ( dlg->rct.Ymin < 0 )
        {
          dlg->rct.Ymax -= dlg->rct.Ymin;
          dlg->rct.Ymin -= dlg->rct.Ymin;
        }
        if ( dlg->rct.Xmax > 640 )
        {
          dlg->rct.Xmin -= dlg->rct.Xmax - 640;
          dlg->rct.Xmax -= dlg->rct.Xmax - 640;
        }
        if ( dlg->rct.Ymax > 360 )
        {
          dlg->rct.Ymin -= dlg->rct.Ymax - 360;
          dlg->rct.Ymax -= dlg->rct.Ymax - 360;
        }
      }
      i = dlg->Child();
      while( i )
      {
        if ( !(evt->cursor.x >= (dlg->rct.Xmin + i->rct.Xmin) &&
             evt->cursor.x <= (dlg->rct.Xmin + i->rct.Xmax) &&
             evt->cursor.y >= (dlg->rct.Ymin + i->rct.Ymin) &&
             evt->cursor.y <= (dlg->rct.Ymin + i->rct.Ymax))
           )
        {
          switch( i->wIndex )
          {
            case 255: // minimize
            case -2: // close
              i->srcBits.data = gbTinyBtnGfx[0];
              break;
          }
        }
        i = i->Next();
      }
      break;
    case 4: // Left Button down
      if ( evt->cursor.x >= dlg->rct.Xmin &&
         evt->cursor.x <= dlg->rct.Xmax - 27 &&
         evt->cursor.y >= dlg->rct.Ymin &&
         evt->cursor.y <= dlg->rct.Ymin + 12 )
      {
        mouseOffset->x = evt->cursor.x - dlg->rct.Xmin;
        mouseOffset->y = evt->cursor.y - dlg->rct.Ymin;
        dlg->wUnk_0x1E = 1;
      }
      break;
    case 5: // Left Button up
      dlg->wUnk_0x1E = 0;
      break;
    }
    return dlg->DefaultInteract(evt);
  }
  // ------------------ CREATE DLG WINDOW ------------
  dialog *CreateDialogWindow(const char *text, WORD left, WORD top, WORD width, WORD height)
  {
    dialog *dlg = new dialog(ctrls::cDLG, 0, text, left, top, width, height, &WindowInteract);
    BYTE *data  = dlg->srcBits.data;
    if ( data )
    {
      memset(&data[width + 3], 0x2C, width - 6);
      memset(&data[width*2 + 2], 0x2C, width - 4);
      for (int i = 3; i < 12; i++)
        memset(&data[width*i + 1], 0x2C, width - 2);
    }

    dialog *title = new dialog(ctrls::cLSTATIC, -255, text, 8, 1, width - 27, 12);
    title->SetFlags(CTRL_FONT_SMALLEST);
    dlg->AddControl(title);

    dialog *minimize = new dialog(ctrls::cBUTTON, 255, " _", width - 26, 1, 12, 12, &TinyButtonInteract);
    minimize->SetFlags(CTRL_FONT_SMALLEST);
    minimize->srcBits.data = gbTinyBtnGfx[0];
    dlg->AddControl(minimize);

    dialog *close = new dialog(ctrls::cBUTTON, -2, " X", width - 13, 1, 12, 12, &TinyButtonInteract);
    close->SetFlags(CTRL_FONT_SMALLEST);
    close->srcBits.data = gbTinyBtnGfx[0];
    dlg->AddControl(close);

    return dlg;
  }

// -------------------------------------------------- GLOBAL -------------------------------------------------
  // ----------------- CONSTRUCTORS ------------------
  dialog::dialog(WORD ctrlType, short index, const char *text, WORD left, WORD top, WORD width, WORD height, bool (__fastcall *pfInteract)(dialog*,dlgEvent*))
  {
    if ( ctrlType > ctrls::max)
      ctrlType = ctrls::cLSTATIC;

    memset(this, 0, sizeof(dialog));

    // Set default height
    if ( height == 0 )
    {
      switch ( ctrlType )
      {
      case ctrls::cBUTTON:
      case ctrls::cDFLTBTN:
        height = 28;
        break;
      case ctrls::cCHKBOX:
      case ctrls::cOPTION:
        height = 20;
        break;
      case ctrls::cEDIT:
        height = 16;
        break;
      }
    }

    // Set size properties
    rct.Xmin    = left;
    rct.Ymin    = top;
    rct.Xmax    = rct.Xmin + width - 1;
    rct.Ymax    = rct.Ymin + height - 1;
    srcBits.wid = width;
    srcBits.ht  = height;

    // Set misc properties
    pszText     = (char*)text;
    lFlags      = CTRL_VISIBLE;
    wIndex      = index;
    wCtrlType   = ctrlType;

    // Set callback functions
    pfcnUpdate  = BW::BWDATA_GenericDlgUpdateFxns[wCtrlType];
    if ( pfInteract )
      pfcnInteract = pfInteract;
    else
      pfcnInteract = BW::BWDATA_GenericDlgInteractFxns[wCtrlType];

    // Set control type-specific options
    BYTE *data;
    switch ( ctrlType )
    {
    case ctrls::cDLG:
      lFlags        |= CTRL_DLG_NOREDRAW | CTRL_TRANSLUCENT;
      srcBits.data  = (BYTE*)malloc(width*height);
      data = srcBits.data;
      if ( data )
      {
        // first line
        memset(data, 0x00, 3);
        memset(&data[3], 0x2A, width - 6);
        memset(&data[width - 3], 0x00, 3);

        // second line
        data[width] = 0;
        memset(&data[width + 1], 0x2A, 2);
        memset(&data[width + 3], 0x29, width - 6);
        memset(&data[width*2 - 3], 0x2A, 2);
        data[width*2 - 1] = 0;

        // third line
        data[width*2] = 0;
        data[width*2 + 1] = 0x2A;
        memset(&data[width*2 + 2], 0x29, width - 4);
        data[width*3 - 2] = 0x2A;
        data[width*3 - 1] = 0;

        for (int i = 3; i < height - 3; i++)
        {
          data[width*i] = 0x2A;
          memset(&data[width*i + 1], 0x29, width - 2);
          data[width*(i+1) - 1] = 0x2A;
        }

        // third-last line
        data[width*height - width*3] = 0;
        data[width*height - width*3 + 1] = 0x2A;
        memset(&data[width*height - width*3 + 2], 0x29, width - 4);
        data[width*height - width*2 - 2] = 0x2A;
        data[width*height - width*2 - 1] = 0;

        // second-last line
        data[width*height - width*2] = 0;
        memset(&data[width*height - width*2 + 1], 0x2A, 2);
        memset(&data[width*height - width*2 + 3], 0x29, width - 6);
        memset(&data[width*height - width - 3], 0x2A, 2);
        data[width*height - width - 1] = 0;

        // last line
        memset(&data[width*height - width], 0x00, 3);
        memset(&data[width*height - width + 3], 0x2A, width - 6);
        memset(&data[width*height - 3], 0x00, 3);
      }
      // Allocate destination buffer
      u.dlg.dstBits.wid   = width;
      u.dlg.dstBits.ht    = height;
      u.dlg.dstBits.data  = (BYTE*)malloc(width*height);
      break;
    case ctrls::cBUTTON:
    case ctrls::cDFLTBTN:
    case ctrls::cFLCBTN:
      lFlags   |= CTRL_USELOCALGRAPHIC | CTRL_FONT_LARGE | CTRL_TRANSLUCENT;
      wGraphic = 112;
    case ctrls::cCHKBOX:
    case ctrls::cOPTION:
    case ctrls::cHSCROLL:
    case ctrls::cVSCROLL:
      lFlags |= CTRL_EVENTS;
      break;
    case ctrls::cLIST:
    case ctrls::cCOMBO:
      lFlags |= CTRL_TRANSPARENT;
    case ctrls::cEDIT:
      lFlags |= CTRL_EVENTS | CTRL_BTN_NO_SOUND;
      break;
    }
  }
  // ------------------ DESTRUCTOR -------------------
  dialog::~dialog()
  {
    if ( this )
      this->Event(14, 1);
    MessageBoxA(NULL, "Watch Out!", "!", MB_OK);
  }
  // --------------------- FIND ----------------------
  dialog *dialog::FindIndex(short wIndex)
  {
    if ( !this )
      return NULL;

    dialog *pCurrDlg;
    if ( this->IsDialog() )
      pCurrDlg = this;
    else
      pCurrDlg = this->Parent();

    if ( pCurrDlg )
      pCurrDlg = pCurrDlg->Child();

    while (pCurrDlg != NULL && pCurrDlg->GetIndex() != wIndex)
      pCurrDlg = pCurrDlg->Next();
    
    if ( pCurrDlg->GetIndex() == wIndex )
      return pCurrDlg;

    return NULL;
  }
  // --------------------- ADD -----------------------
  bool dialog::AddControl(dialog *ctrl)
  {
    if ( !this || !ctrl || ctrl->IsDialog())
      return false;

    dialog *parent = this;
    if ( !parent->IsDialog() )
      parent = parent->Parent();

    ctrl->u.ctrl.pDlg = parent;
    if ( !parent->Child() )
    {
      parent->u.dlg.pFirstChild = ctrl;
    }
    else
    {
      dialog *child = parent->Child();
      while ( child->pNext )
        child = child->pNext;
      child->pNext = ctrl;
    }
    return true;
  }
// ------------------ INITIALIZE ---------------------
  bool dialog::Initialize()
  {
    if ( this && this->IsDialog() )
    {
      this->Event(14, 7);
      this->Event(14, 10);
      this->Event(14, 0);
      return true;
    }
    return false;
  }
  // --------------------- NEXT ----------------------
  dialog *dialog::Next()
  {
    if ( this && this->pNext )
      return this->pNext;
    return NULL;
  }
  // ------------------ FIND BY NAME -----------------
  dialog *dialog::FindDialogByName(const char *pszName)
  {
    if ( this )
    {
      dialog *parent = this;
      if ( !parent->IsDialog() )
        parent = parent->Parent();
      
      while ( parent )
      {
        if (parent->pszText && strcmpi(parent->pszText, pszName) == 0 )
          return parent;
        parent = parent->Next();
      }
    }
    return NULL;
  }
  // ------------------- SET FLAG --------------------
  bool dialog::SetFlags(DWORD dwFlag)
  {
    if ( this )
    {
      if ( !this->IsDialog() )
      {
        DWORD size    = dwFlag & (CTRL_FONT_SMALLEST | CTRL_FONT_SMALL | CTRL_FONT_LARGE | CTRL_FONT_LARGEST);
        DWORD halign  = dwFlag & (CTRL_HALIGN_LEFT | CTRL_HALIGN_RIGHT | CTRL_HALIGN_CENTER);
        DWORD valign  = dwFlag & (CTRL_VALIGN_TOP | CTRL_VALIGN_MIDDLE | CTRL_VALIGN_BOTTOM);
        DWORD remains = dwFlag & ~(size | halign | valign);

        // set size
        if (size == CTRL_FONT_SMALLEST ||
            size == CTRL_FONT_SMALL ||
            size == CTRL_FONT_LARGE ||
            size == CTRL_FONT_LARGEST)
        {
          this->ClearFlags(CTRL_FONT_SMALLEST | CTRL_FONT_SMALL | CTRL_FONT_LARGE | CTRL_FONT_LARGEST);
          this->lFlags |= size;
        }

        // set horizontal alignment
        if (halign == CTRL_HALIGN_LEFT ||
            halign == CTRL_HALIGN_RIGHT ||
            halign == CTRL_HALIGN_CENTER)
        {
          this->ClearFlags(CTRL_HALIGN_LEFT | CTRL_HALIGN_RIGHT | CTRL_HALIGN_CENTER);
          this->lFlags |= halign;
        }

        // set vertical alignment
        if (valign == CTRL_VALIGN_TOP ||
            valign == CTRL_VALIGN_MIDDLE ||
            valign == CTRL_VALIGN_BOTTOM)
        {
          this->ClearFlags(CTRL_VALIGN_TOP | CTRL_VALIGN_MIDDLE | CTRL_VALIGN_BOTTOM);
          this->lFlags |= valign;
        }

        this->lFlags |= remains;
      }
      else
      {
        this->lFlags |= dwFlag;
      }
      return true;
    }
    return false;
  }
  // ------------------ CLEAR FLAG -------------------
  bool dialog::ClearFlags(DWORD dwFlag)
  {
    if ( this )
    {
      this->lFlags &= ~dwFlag;
      return true;
    }
    return false;
  }
  // ------------------- HAS FLAG --------------------
  bool dialog::HasFlags(DWORD dwFlag)
  {
    if ( this && (this->lFlags & dwFlag) == dwFlag)
      return true;
    return false;
  }
  // ------------------- SET TEXT --------------------
  bool dialog::SetText(char *pszStr)
  {
    if ( this && pszStr && this->wCtrlType != ctrls::cEDIT )
    {
      this->pszText = pszStr;
      return true;
    }
    return false;
  }
  // ------------------- GET TEXT --------------------
  char *dialog::GetText()
  {
    if ( this && this->pszText )
      return this->pszText;
    return "";
  }
  // ------------------ SRC BUFFER -------------------
  BW::bitmap *dialog::GetSourceBuffer()
  {
    if ( this )
      return &this->srcBits;
    return NULL;
  }
// -------------------- ENABLE -----------------------
  bool dialog::Enable()
  {
    if ( this )
    {
      this->ClearFlags(CTRL_DISABLED);
      return true;
    }
    return false;
  }
// -------------------- DISABLE -----------------------
  bool dialog::Disable()
  {
    if ( this )
    {
      this->SetFlags(CTRL_DISABLED);
      return true;
    }
    return false;
  }
// ------------------ IS DISABLED --------------------
  bool dialog::IsDisabled()
  {
    if ( this && this->HasFlags(CTRL_DISABLED) )
      return true;
    return false;
  }
// --------------------- SHOW ------------------------
  bool dialog::Show()
  {
    if ( this )
    {
      this->SetFlags(CTRL_VISIBLE);
      return true;
    }
    return false;
  }
// --------------------- HIDE ------------------------
  bool dialog::Hide()
  {
    if ( this )
    {
      this->ClearFlags(CTRL_VISIBLE);
      return true;
    }
    return false;
  }
// ------------------ IS VISIBLE ---------------------
  bool dialog::IsVisible()
  {
    if ( this && this->HasFlags(CTRL_VISIBLE) )
      return true;
    return false;
  }
// -------------------------------------------------- EVENTS -------------------------------------------------
  // --------------------- EVENT ---------------------
  bool dialog::Event(WORD wEvtNum, DWORD dwUser, WORD wVirtKey)
  {
    if ( this )
    {
      dlgEvent evt;
      evt.cursor.x  = (WORD)BW::BWDATA_Mouse->x;
      evt.cursor.y  = (WORD)BW::BWDATA_Mouse->y;
      evt.wVirtKey  = wVirtKey;
      evt.wNo       = wEvtNum;
      evt.dwUser    = dwUser;
      return this->pfcnInteract(this, &evt);
    }
    return false;
  }
  // ----------------- DEFAULT INTERACT --------------
  bool dialog::DefaultInteract(BW::dlgEvent *pEvent)
  {
    if ( this && pEvent && this->wCtrlType < ctrls::max )
      return BWDATA_GenericDlgInteractFxns[this->wCtrlType](this, pEvent);
    return false;
  }
// -------------------------------------------------- DIALOG -------------------------------------------------
  // --------------------- IS DLG --------------------
  bool dialog::IsDialog()
  {
    if ( this && this->wCtrlType == ctrls::cDLG )
      return true;
    return false;
  }
  // --------------------- CHILD ---------------------
  dialog *dialog::Child()
  {
    if (this && this->IsDialog() && this->u.dlg.pFirstChild )
      return this->u.dlg.pFirstChild;
    return NULL;
  }
  // ------------------ DST BUFFER -------------------
  BW::bitmap *dialog::GetDestBuffer()
  {
    if ( this && this->IsDialog() )
      return &this->u.dlg.dstBits;
    return NULL;
  }
// -------------------------------------------------- CONTROL ------------------------------------------------
  // -------------------- PARENT ---------------------
  dialog *dialog::Parent()
  {
    if ( this && !this->IsDialog() && this->u.ctrl.pDlg )
      return this->u.ctrl.pDlg;
    return NULL;
  }
  // --------------------- INDEX ---------------------
  short dialog::GetIndex()
  {
    if ( this )
      return this->wIndex;
    return 0;
  }
  // ------------- CLEAR FONT FLAGS ------------------
  bool dialog::ClearFontFlags()
  {
    if ( this )
    {
      this->ClearFlags(CTRL_FONT_SMALLEST | CTRL_FONT_SMALL | CTRL_FONT_LARGE | CTRL_FONT_LARGEST);
      this->ClearFlags(CTRL_HALIGN_LEFT | CTRL_HALIGN_RIGHT | CTRL_HALIGN_CENTER);
      this->ClearFlags(CTRL_VALIGN_TOP | CTRL_VALIGN_MIDDLE | CTRL_VALIGN_BOTTOM);
      return true;
    }
    return false;
  }
// -------------------------------------------- BUTTON -------------------------------------------------------
  // ------------------- IS BUTTON -------------------
  bool dialog::IsButton()
  {
    if ( this )
    {
      WORD wCtrl = this->wCtrlType;
      if ( wCtrl == ctrls::cBUTTON || wCtrl == ctrls::cDFLTBTN || wCtrl == ctrls::cFLCBTN )
        return true;
    }
    return false;
  }
// -------------------------------------------- CHECKBOX & OPTION --------------------------------------------
  // ------------------- IS CHECKBOX -----------------
  bool dialog::IsOption()
  {
    if ( this )
    {
      WORD wCtrl = this->wCtrlType;
      if ( wCtrl == ctrls::cCHKBOX || wCtrl == ctrls::cOPTION)
        return true;
    }
    return false;
  }
  // --------------------- CHECKED -------------------
  bool dialog::IsChecked()
  {
    if ( this && this->IsOption() )
      return this->u.optn.bEnabled != 0;
    return false;
  }
// -------------------------------------------- LISTBOX & COMBOBOX -------------------------------------------
// ----------------------- IS LIST -------------------
  bool dialog::IsList()
  {
    if ( this )
    {
      WORD wCtrl = this->wCtrlType;
      if ( wCtrl == ctrls::cCOMBO || wCtrl == ctrls::cLIST )
        return true;
    }
    return false;
  }
// ------------------- GET SELECTED ------------------
  BYTE dialog::GetSelectedIndex()
  {
    if ( this && this->IsList() )
      return this->u.list.bSelectedIndex;
    return 0;
  }
  DWORD dialog::GetSelectedValue()
  {
    if ( this 
        && this->IsList() 
        && this->u.list.pdwData 
        && this->u.list.bSelectedIndex < this->u.list.bStrs)
      return this->u.list.pdwData[this->u.list.bSelectedIndex];
    return 0;
  }
  char *dialog::GetSelectedString()
  {
    if ( this && this->IsList() && this->u.list.ppStrs && this->u.list.ppStrs[this->u.list.bCurrStr])
      return this->u.list.ppStrs[this->u.list.bCurrStr];
    return "";
  }
// ------------------- SET SELECTED ------------------
  bool dialog::SetSelectedIndex(BYTE bIndex)
  {
    if ( this && this->IsList() && bIndex < this->u.list.bStrs )
    {
      this->u.list.bCurrStr       = bIndex;
      this->u.list.bSelectedIndex = bIndex;
      return true;
    }
    return false;
  }
  bool dialog::SetSelectedByValue(DWORD dwValue)
  {
    if ( this && this->IsList() && this->u.list.pdwData)
    {
      for (int i = 0; i < this->u.list.bStrs; i++)
      {
        if ( this->u.list.pdwData[i] == dwValue)
        {
          this->u.list.bCurrStr       = (BYTE)i;
          this->u.list.bSelectedIndex = (BYTE)i;
          return true;
        }
      }
    } // check
    return false;
  }
  bool dialog::SetSelectedByString(char *pszString)
  {
    // verify that this is the correct control
    if ( this && this->IsList() )
    {
      // Iterate through each entry
      for (int i = 0; i < this->u.list.bStrs; i++)
      {
        // Verify pointer validity
        if ( this->u.list.ppStrs && this->u.list.ppStrs[i] )
        {
          // compare the string to the one we're looking for
          if ( strcmpi(this->u.list.ppStrs[i], pszString) == 0 )
          {
            // set the selected entry
            this->u.list.bCurrStr       = (BYTE)i;
            this->u.list.bSelectedIndex = (BYTE)i;
            return true;
          }
        } // pointer validate
      } // iterator
    }
    return false;
  }
  // ------------------- ADD ENTRY -------------------
  bool dialog::AddListEntry(char *pszString, DWORD dwValue, BYTE bFlags)
  {
    if ( this && this->IsList() && this->u.list.pbStrFlags && this->u.list.pdwData && this->u.list.ppStrs )
    {
      BYTE count = this->u.list.bStrs;
      if ( count < 255 )
      {
        this->u.list.pbStrFlags[count] = bFlags;
        this->u.list.pdwData[count]    = dwValue;
        this->u.list.ppStrs[count]     = pszString;
        this->u.list.bStrs++;
        return true;
      }
    }
    return false;
  }
};