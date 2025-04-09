
/* BoxFace GetAssociatedBoxFace() */

BoxFace__Enum
Assembly-CSharp.dll::RTG::AxisDescriptor::AxisDescriptor_GetAssociatedBoxFace
          (AxisDescriptor *this,MethodInfo *method)

{
  iVar1 = (this->fields)._index;
  if ((this->fields)._sign == 1) {
    if (iVar1 != 0) {
      BVar2 = BoxFace__Enum_Bottom;
      if (iVar1 != 1) {
        BVar2 = BoxFace__Enum_Front;
      }
      return BVar2;
    }
    return BoxFace__Enum_Left;
  }
  if (iVar1 != 0) {
    return (uint)(iVar1 == 1) * 4 + BoxFace__Enum_Back;
  }
  return BoxFace__Enum_Right;
}


/* AxisDescriptor(Int32, AxisSign) */

void Assembly-CSharp.dll::RTG::AxisDescriptor::AxisDescriptor__ctor
               (AxisDescriptor *this,int32_t axisIndex,AxisSign__Enum axisSign,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._sign = axisSign;
  (this->fields)._index = axisIndex;
  return;
}


/* AxisDescriptor(Int32, Boolean) */

void Assembly-CSharp.dll::RTG::AxisDescriptor::AxisDescriptor__ctor_1
               (AxisDescriptor *this,int32_t axisIndex,bool isNegative,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if (this != (AxisDescriptor *)0x0) {
    (this->fields)._sign = (uint)isNegative;
    (this->fields)._index = axisIndex;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

