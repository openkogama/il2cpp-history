
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
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* DesktopDefaultKeyboardMapping+ControlBitArray() */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray__ctor
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__BitArray);
    cRam_? = '\x01';
  }
  this_00 = (BitArray *)func_?(TypeInfo__System__Collections__BitArray);
  mscorlib.dll::System::Collections::BitArray::BitArray__ctor(this_00,0x36,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).controlDown = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Boolean get_Item(KogamaControls) */

bool Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_get_Item
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,KogamaControls__Enum ctrl,
               MethodInfo *method)

{
  pBVar1 = (this->fields).controlDown;
  if (pBVar1 == (BitArray *)0x0) goto code_?;
  method = (MethodInfo *)0x0;
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    pKStack_2 = &ctrl;
    ppIStack_3 = &TypeInfo__System__Int32;
    ppIStack_3 = (Int32__Class **)func_?();
    actualValue = (Object *)func_?();
    ppAStack_4 = &TypeInfo__System__ArgumentOutOfRangeException;
    puStack_5 = (undefined *)func_?();
    this_00 = (ArgumentOutOfRangeException *)func_?();
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    func_?(&MethodInfo__System__Collections__BitArray__Get_int_);
    func_?();
code_?:
    func_?();
  }
  else {
    pIVar6 = (pBVar1->fields).m_array;
    if (pIVar6 != (Int32__Array *)0x0) {
      if (ctrl >> 5 < pIVar6->max_length) {
        return (pIVar6->vector[ctrl >> 5] & 1 << ((byte)ctrl & 0x1f)) != 0;
      }
      goto code_?;
    }
  }
code_?:
  ppIStack_3 = (Int32__Class **)&stack0xfffffffc;
  uVar7 = func_?(&puStack_5);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void set_Item(KogamaControls, Boolean) */

void Assembly-CSharp.dll::DesktopDefaultKeyboardMapping+ControlBitArray::
     DesktopDefaultKeyboardMapping_ControlBitArray_set_Item
               (DesktopDefaultKeyboardMapping_ControlBitArray *this,KogamaControls__Enum ctrl,
               bool value,MethodInfo *method)

{
  pBVar1 = (this->fields).controlDown;
  if (pBVar1 == (BitArray *)0x0) goto code_?;
  method = (MethodInfo *)0x0;
  if (((int)ctrl < 0) || ((pBVar1->fields).m_length <= (int)ctrl)) {
    pbStack_2 = &value;
    _value = ctrl;
    ppIStack_3 = &TypeInfo__System__Int32;
    ppIStack_3 = (Int32__Class **)func_?();
    actualValue = (Object *)func_?();
    ppAStack_4 = &TypeInfo__System__ArgumentOutOfRangeException;
    puStack_5 = (undefined *)func_?();
    this_00 = (ArgumentOutOfRangeException *)func_?();
    message = (String *)func_?(&StringLiteral_Index_was_out_of_range__Must_be_);
    paramName = (String *)func_?(&StringLiteral_index);
    mscorlib.dll::System::ArgumentOutOfRangeException::ArgumentOutOfRangeException__ctor_3
              (this_00,paramName,actualValue,message,(MethodInfo *)0x0);
    func_?(&MethodInfo__System__Collections__BitArray__Set_int__bool_);
    func_?();
code_?:
    func_?();
  }
  else {
    pIVar6 = (pBVar1->fields).m_array;
    if (value == 0) {
      if (pIVar6 != (Int32__Array *)0x0) {
        uVar7 = ctrl >> 5;
        if (uVar7 < pIVar6->max_length) {
          pIVar6->vector[uVar7] =
               pIVar6->vector[uVar7] & ~(1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane));
          piVar8 = &(pBVar1->fields)._version;
          *piVar8 = *piVar8 + 1;
          return;
        }
        goto code_?;
      }
    }
    else if (pIVar6 != (Int32__Array *)0x0) {
      uVar7 = ctrl >> 5;
      if (uVar7 < pIVar6->max_length) {
        pIVar6->vector[uVar7] =
             pIVar6->vector[uVar7] | 1 << (ctrl & KogamaControls__Enum_ToggleDrawPlane);
        piVar8 = &(pBVar1->fields)._version;
        *piVar8 = *piVar8 + 1;
        return;
      }
      goto code_?;
    }
  }
code_?:
  ppIStack_3 = (Int32__Class **)&stack0xfffffffc;
  uVar9 = func_?(&puStack_5);
  func_?(uVar9);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

