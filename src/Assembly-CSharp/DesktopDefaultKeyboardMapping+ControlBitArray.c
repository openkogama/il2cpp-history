
/* Void Reset() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_Reset
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,MethodInfo *method)

{
  pBVar1 = (this->fields).controlDown;
  if (pBVar1 == (BitArray *)0x0) {
code_?:
    FUN_?(this,method);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = (pBVar1->fields).m_length;
  this = (DesktopDefaultKeyboardMapping_ControlBitArray *)0x0;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    iVar4 = ((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) + 1;
  }
  if (0 < iVar4) {
    lVar5 = 0x20;
    method = (MethodInfo *)this;
    do {
      pIVar6 = (pBVar1->fields).m_array;
      if (pIVar6 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar6->max_length <= (uint)this) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)((longlong)pIVar6->vector + lVar5 + -0x20) = 0;
      this = (DesktopDefaultKeyboardMapping_ControlBitArray *)(ulonglong)((uint)this + 1);
      lVar5 = lVar5 + 4;
      method = (MethodInfo *)((longlong)&method->methodPointer + 1);
    } while ((longlong)method < (longlong)iVar4);
  }
  piVar7 = &(pBVar1->fields)._version;
  *piVar7 = *piVar7 + 1;
  return;
}


/* DesktopDefaultKeyboardMapping+ControlBitArray() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray__ctor
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Collections__BitArray);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)FUN_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor_1(this_00,0x36,0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).controlDown = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
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
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    aKStackX_10[0] = ctrl;
    actualValue = (Object *)func_?(uRam_?,aKStackX_10,0);
    uVar4 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar4);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    FUN_?(this_00,uVar4);
  }
  else {
    pIVar5 = (pBVar1->fields).m_array;
    if (pIVar5 == (Int32__Array *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    if (ctrl >> 5 < (uint)pIVar5->max_length) {
      return (pIVar5->vector[ctrl >> 5] & 1 << ((byte)ctrl & 0x1f)) != 0;
    }
  }
  FUN_?();
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
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    aKStackX_10[0] = ctrl;
    actualValue = (Object *)
                  func_?(uRam_?,aKStackX_10,
                                      CONCAT71(in_register_00000081,value),0);
    uVar3 = func_?(&TypeInfo__System__ArgumentOutOfRangeException);
    this_00 = (ArgumentOutOfRangeException *)func_?(uVar3);
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    uVar3 = func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
    FUN_?(this_00,uVar3);
  }
  else {
    pIVar4 = (pBVar1->fields).m_array;
    if (value == 0) {
      if (pIVar4 == (Int32__Array *)0x0) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = ctrl >> 5;
      if (uVar5 < (uint)pIVar4->max_length) {
        pIVar4->vector[uVar5] =
             pIVar4->vector[uVar5] & ~(1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane));
        piVar6 = &(pBVar1->fields)._version;
        *piVar6 = *piVar6 + 1;
        return;
      }
    }
    else {
      if (pIVar4 == (Int32__Array *)0x0) goto code_?;
      uVar5 = ctrl >> 5;
      if (uVar5 < (uint)pIVar4->max_length) {
        pIVar4->vector[uVar5] =
             pIVar4->vector[uVar5] | 1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane);
        piVar6 = &(pBVar1->fields)._version;
        *piVar6 = *piVar6 + 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

