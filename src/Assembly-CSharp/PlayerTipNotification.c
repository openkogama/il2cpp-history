
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerTipNotification::PlayerTipNotification_Initialize
               (PlayerTipNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).tipText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_01,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pTVar1 != (Text *)0x0) {
      pPVar3 = (Pool *)0x0;
      if (pPVar2 != (Pool *)0x0) {
        if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
          pPVar3 = pPVar2;
        }
        if (pPVar3 == (Pool *)0x0) goto code_?;
      }
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,pPVar3);
      this_00 = (this->fields).fader;
      if (this_00 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  pPVar2 = (Pool *)func_?();
code_?:
  func_?(pPVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

