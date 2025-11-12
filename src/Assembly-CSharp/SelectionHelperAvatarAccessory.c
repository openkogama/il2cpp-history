
/* Void Init(AvatarAccessory, AccessorySlotType, Int32, Int32) */

void Assembly-CSharp.dll::SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
               (SelectionHelperAvatarAccessory *this,AvatarAccessory *avatarAccessory,
               AccessorySlotType__Enum slot,int32_t avatarBodyWoID,
               int32_t accessoryStreamingAssetsId,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).avatarAccessory = avatarAccessory;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).avatarAccessory >> 0xc);
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
  (this->fields).streamingAssetsId = accessoryStreamingAssetsId;
  (this->fields).slot = slot;
  (this->fields).avatarBodyWoID = avatarBodyWoID;
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::SelectionHelperAvatarAccessory::
         SelectionHelperAvatarAccessory_ToString
                   (SelectionHelperAvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_AvatarBodyWoID_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).avatarBodyWoID,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_AvatarBodyWoID_,pSVar1,(MethodInfo *)0x0);
  args = (Object__Array *)
         System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                   (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
  if (args != (Object__Array *)0x0) {
    PStack_2._arg0 = (Object *)0x0;
    PStack_2._arg1 = (Object *)0x0;
    PStack_2._arg2 = (Object *)0x0;
    PStack_2._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_2,args,(MethodInfo *)0x0);
    PStack_3._arg0 = PStack_2._arg0;
    PStack_3._arg1 = PStack_2._arg1;
    PStack_3._arg2 = PStack_2._arg2;
    PStack_3._args = PStack_2._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
    return pSVar1;
  }
  ppSVar4 = &StringLiteral_format;
  if (pSVar1 != (String *)0x0) {
    ppSVar4 = &StringLiteral_args;
  }
  pSVar1 = (String *)func_?(ppSVar4);
  uVar5 = func_?(&TypeInfo__System__ArgumentNullException);
  this_00 = (ArgumentNullException *)func_?(uVar5);
  mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
            (this_00,pSVar1,(MethodInfo *)0x0);
  uVar5 = func_?(&
                              MethodInfo__System__String__Format_MethodInfo__System__String__System__Object____
                             );
  FUN_?(this_00,uVar5);
  pcVar6 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar6)();
  return pSVar1;
}

