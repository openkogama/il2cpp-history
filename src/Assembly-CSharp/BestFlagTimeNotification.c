
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::BestFlagTimeNotification::BestFlagTimeNotification_Initialize
               (BestFlagTimeNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BestFlagTimeNotification__DestroyNotification__);
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  this_01 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar1 = (this->fields).timeText;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  key = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (pTVar1 != (Text *)0x0) {
      if (TVar2.m_Index != 0) {
        TVar3.m_Index = 0;
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          TVar3 = TVar2;
        }
        if (TVar3.m_Index == 0) goto code_?;
      }
      (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
      pNVar4 = (this->fields).fader;
      if (pNVar4 != (NotificationFade *)0x0) {
        (pNVar4->fields).pauseAt = (pNVar4->fields).duration;
        this_00 = (pNVar4->fields).group;
        (pNVar4->fields).playing = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pNVar4->fields).currentTime = 0.0;
          object = TypeInfo__System__Action;
          pNVar4 = (this->fields).fader;
          if (pNVar4 != (NotificationFade *)0x0) {
            pAVar5 = (pNVar4->fields).OnFinished;
            this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_02,(Object *)object,
                       MethodInfo__BestFlagTimeNotification__DestroyNotification__,(MethodInfo *)0x0
                      );
            pAVar5 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar5,(Delegate *)this_02,(MethodInfo *)0x0);
            if (pAVar5 == (Action *)0x0) {
              (pNVar4->fields).OnFinished = (Action *)0x0;
              func_?();
              return;
            }
            pAVar6 = (Action *)0x0;
            if (pAVar5->klass == TypeInfo__System__Action) {
              pAVar6 = pAVar5;
            }
            if (pAVar6 != (Action *)0x0) {
              (pNVar4->fields).OnFinished = pAVar6;
              pAVar6 = (Action *)0x0;
              if (pAVar5->klass == TypeInfo__System__Action) {
                pAVar6 = pAVar5;
              }
              if (pAVar6 != (Action *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

