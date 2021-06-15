
/* Void Init(AvatarAccessory, AccessorySlotType, Int32, Int32) */

void Assembly-CSharp.dll::SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory_Init
               (SelectionHelperAvatarAccessory *this,AvatarAccessory *avatarAccessory,
               AccessorySlotType__Enum slot,int32_t avatarBodyWoID,
               int32_t accessoryStreamingAssetsId,MethodInfo *method)

{
  (this->fields).avatarAccessory = avatarAccessory;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (SelectionHelperAvatarAccessory *)(this->fields).avatarBodyWoID;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_AvatarBodyWoID_,arg1,(MethodInfo *)0x0);
  args = (Object__Array *)func_?(TypeInfo__System__Object,0);
  pSVar1 = mscorlib.dll::System::String::String_Format_3(pSVar1,args,(MethodInfo *)0x0);
  return pSVar1;
}


/* SelectionHelperAvatarAccessory() */

void Assembly-CSharp.dll::SelectionHelperAvatarAccessory::SelectionHelperAvatarAccessory__ctor
               (SelectionHelperAvatarAccessory *this,MethodInfo *method)

{
  (this->fields).streamingAssetsId = -1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

