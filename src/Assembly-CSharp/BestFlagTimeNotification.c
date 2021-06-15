
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BestFlagTimeNotification::BestFlagTimeNotification_Initialize
               (BestFlagTimeNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).timeText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    in_stack_2 = extraout_ECX;
    in_stack_3 = extraout_EDX;
  }
  else {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pTVar1 == (Text *)0x0) goto code_?;
    pPVar5 = (Pool *)0x0;
    if (pPVar4 != (Pool *)0x0) {
      if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
        pPVar5 = pPVar4;
      }
      if (pPVar5 == (Pool *)0x0) goto code_?;
    }
    (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1,pPVar5);
    pNVar6 = (this->fields).fader;
    if (pNVar6 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_Activate(pNVar6,(MethodInfo *)0x0);
    pNVar6 = (this->fields).fader;
    if (pNVar6 == (NotificationFade *)0x0) goto code_?;
    pAVar7 = (pNVar6->fields).OnFinished;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,(Object *)this,MethodInfo__BestFlagTimeNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    in_stack_2 =
         (Action *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar7,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar7 = (Action *)0x0;
    if (in_stack_2 == (Action *)0x0) {
code_?:
      (pNVar6->fields).OnFinished = pAVar7;
      return;
    }
    if (in_stack_2->klass == TypeInfo__System__Action) {
      pAVar7 = in_stack_2;
    }
    in_stack_3 = TypeInfo__System__Action;
    if (pAVar7 != (Action *)0x0) goto code_?;
  }
  in_stack_8 = &UNK_?;
  pPVar4 = (Pool *)func_?();
code_?:
  func_?(pPVar4);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

