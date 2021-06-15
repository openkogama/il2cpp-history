
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::FlagHighScoreNotification::FlagHighScoreNotification_Initialize
               (FlagHighScoreNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__Int32,pPVar2);
    if (pPVar2 == (Pool *)0x0) goto code_?;
    if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar4 = (int32_t *)func_?(pPVar2);
    iVar5 = *piVar4;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 == (MVAvatar *)0x0) ||
       (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
       this_01 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
    bVar6 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                      ((MVPlayerContainer *)this_01,iVar5,(MVPlayer **)&stack0xfffffff4,
                       (MethodInfo *)0x0);
    if (bVar6 == 0) {
      return;
    }
    Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
    pTVar7 = (this->fields).timeText;
    this_03 = TypeInfo__System__Byte;
    pTVar1 = (Type *)func_?();
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar3 = CONCAT44(TypeInfo__System__String,pPVar2);
    if (pTVar7 == (Text *)0x0) goto code_?;
    pPVar8 = (Pool *)0x0;
    if (pPVar2 != (Pool *)0x0) {
      if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
        pPVar8 = pPVar2;
      }
      if (pPVar8 == (Pool *)0x0) goto code_?;
    }
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,pPVar8,(pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar7 = (this->fields).userNameText;
    if (((this_03 == (Byte__Class *)0x0) ||
        (iVar5 = GamePointGainEffect::GamePointGainEffect_get_ID
                           ((GamePointGainEffect *)this_03,(MethodInfo *)0x0), iVar5 == 0)) ||
       (pTVar7 == (Text *)0x0)) goto code_?;
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,*(undefined4 *)(iVar5 + 0xc),
               (pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pNVar9 = (this->fields).fader;
    if (pNVar9 == (NotificationFade *)0x0) goto code_?;
    NotificationFade::NotificationFade_Activate(pNVar9,(MethodInfo *)0x0);
    pNVar9 = (this->fields).fader;
    if (pNVar9 == (NotificationFade *)0x0) goto code_?;
    a = (pNVar9->fields).OnFinished;
    pAVar10 = TypeInfo__System__Action;
    this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_02,(Object *)this,MethodInfo__FlagHighScoreNotification__DestroyNotification__,
               (MethodInfo *)0x0);
    pIVar11 = (Il2CppClass *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)this_02,(MethodInfo *)0x0);
    pIVar12 = (Il2CppClass *)0x0;
    if (pIVar11 == (Il2CppClass *)0x0) {
code_?:
      (pAVar10->_0).declaringType = pIVar12;
      return;
    }
    if ((Action__Class *)pIVar11->image == TypeInfo__System__Action) {
      pIVar12 = pIVar11;
    }
    if (pIVar12 != (Il2CppClass *)0x0) goto code_?;
  }
  uVar3 = func_?();
code_?:
  func_?(uVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

