
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
  pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__String,pOVar3);
    if (pTVar2 != (Text *)0x0) {
      pOVar5 = (Object *)0x0;
      if (pOVar3 != (Object *)0x0) {
        if ((String__Class *)pOVar3->klass == TypeInfo__System__String) {
          pOVar5 = pOVar3;
        }
        if (pOVar5 == (Object *)0x0) goto code_?;
      }
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pOVar5,(pTVar2->klass->vtable).set_text.method);
      pNVar6 = (pPVar1->fields).fader;
      if (pNVar6 != (NotificationFade *)0x0) {
        (pNVar6->fields).pauseAt = (pNVar6->fields).duration;
        this_00 = (pNVar6->fields).group;
        (pNVar6->fields).playing = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pNVar6->fields).currentTime = 0.0;
          return;
        }
      }
    }
  }
  uVar4 = func_?();
code_?:
  func_?(uVar4);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

