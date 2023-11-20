
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_Initialize
               (InstructionMessage *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__NotificationLifetime);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Initialize);
    cRam_? = '\x01';
  }
  this_00 = data;
  pIVar1 = this;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar2 = (pIVar1->fields).text;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (pTVar2 != (Text *)0x0) {
      if (TVar4.m_Index != 0) {
        TVar5.m_Index = 0;
        if (*(String__Class **)TVar4.m_Index == TypeInfo__System__String) {
          TVar5 = TVar4;
        }
        this = (InstructionMessage *)TypeInfo__System__String;
        if (TVar5.m_Index == 0) goto code_?;
      }
      this = (InstructionMessage *)
             (pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2);
      (pIVar1->fields).currentTime = 0.0;
      this = (InstructionMessage *)CONCAT13(2,this._0_3_);
      pOVar3 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                         pOVar3,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar4.m_Index != 0) {
        this = (InstructionMessage *)TypeInfo__NotificationLifetime;
        if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
            (TypeInfo__NotificationLifetime->_0).element_class) {
          this = (InstructionMessage *)TVar4;
          piVar6 = (int32_t *)func_?();
          (pIVar1->fields).lifeTime = *piVar6;
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)StringLiteral_Initialize;
          data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Initialize,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  this = (InstructionMessage *)&UNK_?;
  func_?();
  this = (InstructionMessage *)extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_OnEnable
               (InstructionMessage *this,MethodInfo *method)

{
  this_00 = (this->fields).canvasGroup;
  this_01 = (this->fields).fadeCurve;
  if (this_01 != (AnimationCurve *)0x0) {
    pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                       (this_01,(MethodInfo *)0x0);
    if (pKVar1 != (Keyframe__Array *)0x0) {
      if (pKVar1->max_length == 0) goto code_?;
      value = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__GetValueOrDefault
                        ((Nullable_1_Single_ *)pKVar1->vector,(MethodInfo *)0x0);
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_Update
               (InstructionMessage *this,MethodInfo *method)

{
  Notification::Notification_Update((Notification *)this,(MethodInfo *)0x0);
  fVar1 = (this->fields).currentTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pIVar3 = this->klass;
  this_00 = (this->fields).canvasGroup;
  this_01 = (this->fields).fadeCurve;
  (this->fields).currentTime = fVar2;
  iVar4 = (*(code *)(pIVar3->vtable).get_Lifetime.method)
                    (this,(pIVar3->vtable).Initialize.methodPtr);
  if (this_01 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_01,fVar2 / (float)iVar4,(MethodInfo *)0x0);
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,fVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

