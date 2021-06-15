
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::TierUnlockedNotification::TierUnlockedNotification_Initialize
               (TierUnlockedNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tierUnlockedText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 != (Pool *)0x0) {
      str1 = (String *)(*(code *)(pPVar2->klass->vtable).ToString.method)();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      mscorlib.dll::System::String::String_Concat_3
                (StringLiteral__YOU_HAVE_UNLOCKED_TIER_,str1,::StringLiteral__,(MethodInfo *)0x0);
      if (pTVar1 != (Text *)0x0) {
        (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

