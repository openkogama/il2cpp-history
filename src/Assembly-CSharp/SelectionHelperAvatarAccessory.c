
/* Void Init(AvatarAccessory, AccessorySlotType, Int32, Int32) */

void Assembly-CSharp.dll::SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
               (SelectionHelperAvatarAccessory *this,AvatarAccessory *avatarAccessory,
               AccessorySlotType__Enum slot,int32_t avatarBodyWoID,
               int32_t accessoryStreamingAssetsId,MethodInfo *method)

{
  ppAVar1 = &(this->fields).avatarAccessory;
  *ppAVar1 = avatarAccessory;
  func_?(ppAVar1,avatarAccessory);
  (this->fields).slot = slot;
  (this->fields).avatarBodyWoID = avatarBodyWoID;
  (this->fields).streamingAssetsId = accessoryStreamingAssetsId;
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::SelectionHelperAvatarAccessory::
         SelectionHelperAvatarAccessory_ToString
                   (SelectionHelperAvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&StringLiteral_AvatarBodyWoID_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                     ((Int32 *)&(this->fields).avatarBodyWoID,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_AvatarBodyWoID_,pSVar1,(MethodInfo *)0x0);
  pMVar2 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
  if ((System__Object__MethodInfo__System__Array__Empty<System::Object>______->field7_0x1c).
      rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?();
  }
  pIVar3 = (pMVar2->field7_0x1c).rgctx_data[2].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?();
  }
  if (pIVar3->cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar3 = (pMVar2->field7_0x1c).rgctx_data[2].klass;
  if (((uint)pIVar3->vtable[0].methodPtr & 0x100) == 0) {
    pIVar3 = (Il2CppClass *)func_?();
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_3
                     (pSVar1,*(Object__Array **)pIVar3->static_fields,(MethodInfo *)0x0);
  return pSVar1;
}


/* SelectionHelperAvatarAccessory() */

void Assembly-CSharp.dll::SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory__ctor
               (SelectionHelperAvatarAccessory *this,MethodInfo *method)

{
  (this->fields).streamingAssetsId = -1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

