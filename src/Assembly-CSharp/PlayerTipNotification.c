
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PlayerTipNotification::PlayerTipNotification_Initialize
               (PlayerTipNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  this = (PlayerTipNotification *)CONCAT13(1,this._0_3_);
  pTVar2 = (pPVar1->fields).tipText;
  (pPVar1->fields)._.timeSinceStart = 0.0;
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__String,TVar3.m_Index);
    if (pTVar2 != (Text *)0x0) {
      TVar5.m_Index = 0;
      if (TVar3.m_Index != 0) {
        if (*(String__Class **)TVar3.m_Index == TypeInfo__System__String) {
          TVar5 = TVar3;
        }
        if (TVar5.m_Index == 0) goto code_?;
      }
      (*(code *)(pTVar2->klass->vtable).set_text.method)
                (pTVar2,TVar5.m_Index,
                 (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      this_00 = (pPVar1->fields).fader;
      if (this_00 != (NotificationFade *)0x0) {
        NotificationFade::NotificationFade_Activate(this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

