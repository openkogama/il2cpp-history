
/* Void Reset() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_Reset
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,MethodInfo *method)

{
  this_00 = (this->fields).controlDown;
  if (this_00 != (BitArray *)0x0) {
    mscorlib.dll::System::Collections::BitArray::BitArray_SetAll(this_00,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DesktopDefaultKeyboardMapping+ControlBitArray() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray__ctor
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_2(this_00,0x34,(MethodInfo *)0x0);
  (this->fields).controlDown = this_00;
  return;
}


/* Boolean get_Item(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_get_Item
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,KogamaControls__Enum ctrl,
               MethodInfo *method)

{
  pBVar1 = (this->fields).controlDown;
  if (pBVar1 == (BitArray *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    func_?(this_00,0,MethodInfo__System__Collections__BitArray__Get_int_);
  }
  else {
    pIVar4 = (pBVar1->fields).m_array;
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    if ((uint)((int)ctrl >> 5) < pIVar4->max_length) {
      return (pIVar4->vector[(int)ctrl >> 5] & 1 << ((byte)ctrl & 0x1f)) != 0;
    }
  }
  uVar5 = func_?(0,0);
  func_?(uVar5);
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void set_Item(KogamaControls, Boolean) */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_set_Item
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,KogamaControls__Enum ctrl,
               bool value,MethodInfo *method)

{
  pBVar1 = (this->fields).controlDown;
  if (pBVar1 == (BitArray *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    this_00 = (ArgumentOutOfRangeException *)
              func_?(TypeInfo__System__ArgumentOutOfRangeException);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor
              (this_00,(MethodInfo *)0x0);
    func_?(this_00,0,MethodInfo__System__Collections__BitArray__Set_int__bool_);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  else {
    pIVar4 = (pBVar1->fields).m_array;
    uVar5 = (int)ctrl >> 5;
    if (value == 0) {
      if (pIVar4 == (Int32__Array *)0x0) goto code_?;
      if (uVar5 < pIVar4->max_length) {
        pIVar4->vector[uVar5] =
             pIVar4->vector[uVar5] & ~(1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane));
        piVar6 = &(pBVar1->fields)._version;
        *piVar6 = *piVar6 + 1;
        return;
      }
      goto code_?;
    }
    if (pIVar4 == (Int32__Array *)0x0) goto code_?;
    if (uVar5 < pIVar4->max_length) {
      pIVar4->vector[uVar5] =
           pIVar4->vector[uVar5] | 1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane);
      piVar6 = &(pBVar1->fields)._version;
      *piVar6 = *piVar6 + 1;
      return;
    }
  }
  uVar3 = func_?(0,0);
  func_?(uVar3);
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

