
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::InstructionMessage::InstructionMessage_Initialize
               (InstructionMessage *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  pIVar1 = this;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  pTVar2 = (pIVar1->fields).text;
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(1,data._0_3_);
  pTVar3 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pTVar2 != (Text *)0x0) {
      pPVar5 = (Pool *)0x0;
      if (pPVar4 != (Pool *)0x0) {
        if ((String__Class *)pPVar4->klass == TypeInfo__System__String) {
          pPVar5 = pPVar4;
        }
        if (pPVar5 == (Pool *)0x0) goto code_?;
      }
      (*(code *)(pTVar2->klass->vtable).set_text.method)(pTVar2,pPVar5);
      (pIVar1->fields).currentTime = 0.0;
      this = (InstructionMessage *)CONCAT13(2,this._0_3_);
      pTVar3 = (Type *)func_?(TypeInfo__System__Byte,(int)&this + 3);
      pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_00,pTVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar4 != (Pool *)0x0) {
        if ((pPVar4->klass->_0).element_class == (TypeInfo__NotificationLifetime->_0).element_class)
        {
          piVar6 = (int32_t *)func_?();
          (pIVar1->fields).lifeTime = *piVar6;
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
            data = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)0x0;
          data = (Dictionary_2_System_Object_System_Object_ *)StringLiteral_Initialize;
          this = (InstructionMessage *)&UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Initialize,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  pPVar4 = (Pool *)func_?();
code_?:
  func_?(pPVar4);
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
      fVar2 = (float10)func_?(pKVar1->vector,0);
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,(float)fVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
code_?:
  uVar3 = func_?(0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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

