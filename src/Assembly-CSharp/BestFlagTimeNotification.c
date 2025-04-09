
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
  pTVar1 = (this->fields).timeText;
  (this->fields)._.timeSinceStart = 0.0;
  key = (Object *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar3 = CONCAT44(TypeInfo__System__String,TVar2.m_Index);
    if (pTVar1 != (Text *)0x0) {
      TVar4.m_Index = 0;
      if (TVar2.m_Index != 0) {
        if (*(String__Class **)TVar2.m_Index == TypeInfo__System__String) {
          TVar4 = TVar2;
        }
        if (TVar4.m_Index == 0) goto code_?;
      }
      (*(code *)(pTVar1->klass->vtable).set_text.method)
                (pTVar1,TVar4.m_Index,
                 (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
      pNVar5 = (this->fields).fader;
      if (pNVar5 != (NotificationFade *)0x0) {
        (pNVar5->fields).pauseAt = (pNVar5->fields).duration;
        this_00 = (pNVar5->fields).group;
        (pNVar5->fields).playing = 1;
        if (this_00 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (this_00,0.0,(MethodInfo *)0x0);
          (pNVar5->fields).currentTime = 0.0;
          pNVar5 = (this->fields).fader;
          if (pNVar5 != (NotificationFade *)0x0) {
            pAVar6 = (pNVar5->fields).OnFinished;
            this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (this_01,(Object *)this,
                       MethodInfo__BestFlagTimeNotification__DestroyNotification__,(MethodInfo *)0x0
                      );
            pAVar6 = (Action *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pAVar6,(Delegate *)this_01,(MethodInfo *)0x0);
            uVar3 = CONCAT44(TypeInfo__System__Action,pAVar6);
            if (pAVar6 == (Action *)0x0) {
              (pNVar5->fields).OnFinished = (Action *)0x0;
              func_?(&(pNVar5->fields).OnFinished,0);
              return;
            }
            pAVar7 = (Action *)0x0;
            if (pAVar6->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar6;
            }
            if (pAVar7 != (Action *)0x0) {
              (pNVar5->fields).OnFinished = pAVar7;
              uVar3 = CONCAT44(TypeInfo__System__Action,pAVar6);
              pAVar7 = (Action *)0x0;
              if (pAVar6->klass == TypeInfo__System__Action) {
                pAVar7 = pAVar6;
              }
              if (pAVar7 != (Action *)0x0) {
                func_?(&(pNVar5->fields).OnFinished,pAVar7);
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

