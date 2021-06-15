
/* Void DestroyNotification() */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_DestroyNotification
               (WinningWarningNotification *this,MethodInfo *method)

{
  iVar1 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                    (this,(this->klass->vtable).Initialize.methodPtr);
  (this->fields)._.timeSinceStart = (float)iVar1;
  return;
}


/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_Initialize
               (WinningWarningNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffb);
  if ((data == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar2 == (Pool *)0x0)) goto code_?;
  pSVar3 = (String__Class *)TypeInfo__System__Int32;
  if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar4 = (int32_t *)func_?(pPVar2);
    iVar5 = *piVar4;
    pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffffa);
    pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar2 == (Pool *)0x0) goto code_?;
    pSVar3 = (String__Class *)TypeInfo__GameStatCounterType;
    if ((pPVar2->klass->_0).element_class == (TypeInfo__GameStatCounterType->_0).element_class) {
      pcVar6 = (char *)func_?(pPVar2);
      cVar7 = *pcVar6;
      pTVar1 = (Type *)func_?(TypeInfo__System__Byte,&stack0xfffffff9);
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 == (Pool *)0x0) goto code_?;
      pSVar3 = (String__Class *)TypeInfo__System__Int32;
      if ((pPVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        func_?(pPVar2);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0)
        ;
        if ((this_00 == (MVAvatar *)0x0) ||
           (this_01 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
           this_01 == (MVRuntimeDataVariableClampedFloat *)0x0)) goto code_?;
        bVar8 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                          ((MVPlayerContainer *)this_01,iVar5,(MVPlayer **)&stack0xfffffff4,
                           (MethodInfo *)0x0);
        if (bVar8 == 0) {
          return;
        }
        Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
        pTVar9 = (this->fields).scoreText;
        this_04 = (MVPlayer *)&stack0xfffffff9;
        pTVar1 = (Type *)func_?(TypeInfo__System__Byte);
        pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                 Dictionary_2_System_Type_Pool__get_Item
                           ((Dictionary_2_System_Type_Pool_ *)data,pTVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        if (pTVar9 == (Text *)0x0) goto code_?;
        pPVar10 = (Pool *)0x0;
        if (pPVar2 != (Pool *)0x0) {
          if ((String__Class *)pPVar2->klass == TypeInfo__System__String) {
            pPVar10 = pPVar2;
          }
          pSVar3 = TypeInfo__System__String;
          if (pPVar10 == (Pool *)0x0) goto code_?;
        }
        (*(code *)(pTVar9->klass->vtable).set_text.method)
                  (pTVar9,pPVar10,(pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr
                  );
        pTVar9 = (this->fields).userNameText;
        if (((this_04 != (MVPlayer *)0x0) &&
            (iVar5 = GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)this_04,(MethodInfo *)0x0), iVar5 != 0)) &&
           (pTVar9 != (Text *)0x0)) {
          pIVar11 = (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
          (*(code *)(pTVar9->klass->vtable).set_text.method)(pTVar9,*(undefined4 *)(iVar5 + 0xc));
          pNVar12 = (this->fields).fader;
          if (pNVar12 != (NotificationFade *)0x0) {
            NotificationFade::NotificationFade_Activate(pNVar12,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              pIVar11 = _UNK_?;
              func_?();
              cRam_? = '\x01';
            }
            pLVar13 = (this->fields).winningConditionImages;
            index = 0;
            if (pLVar13 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
              while (pOVar14 = mscorlib.dll::System::Collections::ObjectModel::
                               Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                           *)pLVar13,
                                          MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
                                         ), index < (int)pOVar14) {
                pLVar13 = (this->fields).winningConditionImages;
                if ((pLVar13 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) ||
                   (pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                              EventSystems::IEventSystemHandler]::
                              List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)
                                         pLVar13,index,
                                         MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                        ), pIVar15 == (IEventSystemHandler *)0x0))
                goto code_?;
                pLVar13 = (this->fields).winningConditionImages;
                if (*(char *)&pIVar15[1].klass == cVar7) {
                  if (((pLVar13 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                      || (pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
                                    EventSystems::IEventSystemHandler]::
                                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                *)pLVar13,index,
                                               MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                              ), pIVar15 == (IEventSystemHandler *)0x0)) ||
                     (((Component_1 *)pIVar15[1].monitor == (Component_1 *)0x0 ||
                      (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_1_get_gameObject
                                           ((Component_1 *)pIVar15[1].monitor,(MethodInfo *)0x0),
                      this_02 == (GameObject *)0x0)))) goto code_?;
                  bVar8 = 1;
                }
                else {
                  if ((((pLVar13 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                       || (pIVar15 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine
                                     ::EventSystems::IEventSystemHandler]::
                                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_
                                                 *)pLVar13,index,
                                                MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                               ), pIVar15 == (IEventSystemHandler *)0x0)) ||
                      ((Component_1 *)pIVar15[1].monitor == (Component_1 *)0x0)) ||
                     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject
                                          ((Component_1 *)pIVar15[1].monitor,(MethodInfo *)0x0),
                     this_02 == (GameObject *)0x0)) goto code_?;
                  bVar8 = 0;
                }
                pIVar11 = (Il2CppMethodPointer)0x0;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (this_02,bVar8,(MethodInfo *)0x0);
                pLVar13 = (this->fields).winningConditionImages;
                index = index + 1;
                if (pLVar13 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0)
                goto code_?;
              }
              if (cRam_? == '\0') {
                func_?(_UNK_?);
                cRam_? = '\x01';
              }
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar16 = StringLiteral_STAR;
              if ((cVar7 != '\x03') &&
                 ((cVar7 == '\x01' ||
                  (pSVar16 = TypeInfo__System__String->static_fields->Empty, cVar7 == '\x06')))) {
                pSVar16 = StringLiteral_KILL;
              }
              if (1 < (int)pIVar11) {
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__String);
                }
                pSVar16 = mscorlib.dll::System::String::String_Concat_2
                                    (pSVar16,StringLiteral_S,(MethodInfo *)0x0);
              }
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__String);
              }
              pSVar16 = mscorlib.dll::System::String::String_Concat_2
                                  (pSVar16,StringLiteral__LEFT_,(MethodInfo *)0x0);
              pTVar9 = (this->fields).warningText;
              if (pTVar9 != (Text *)0x0) {
                (*(code *)(pTVar9->klass->vtable).set_text.method)
                          (pTVar9,pSVar16,
                           (pTVar9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                pNVar12 = (this->fields).fader;
                if (pNVar12 != (NotificationFade *)0x0) {
                  pAVar17 = (pNVar12->fields).OnFinished;
                  this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)func_?(TypeInfo__System__Action);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (this_03,(Object *)this,
                             MethodInfo__WinningWarningNotification__DestroyNotification__,
                             (MethodInfo *)0x0);
                  pAVar18 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pAVar17,(Delegate *)this_03,(MethodInfo *)0x0);
                  pAVar17 = (Action *)0x0;
                  if (pAVar18 != (Action *)0x0) {
                    if (pAVar18->klass == TypeInfo__System__Action) {
                      pAVar17 = pAVar18;
                    }
                    if (pAVar17 == (Action *)0x0) goto code_?;
                  }
                  (pNVar12->fields).OnFinished = pAVar17;
                  return;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  func_?(pPVar2,pSVar3);
code_?:
  func_?(0);
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SelectWinningConditionImage(GameStatCounterType, MVPlayer) */

void Assembly-CSharp.dll::WinningWarningNotification::
     WinningWarningNotification_SelectWinningConditionImage
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               MVPlayer *player,MethodInfo *method)

{
  pWVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar2 = (this->fields).winningConditionImages;
  if (pLVar2 != (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) {
    while( true ) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Count__
                         );
      if ((int)pOVar3 <= index) {
        return;
      }
      pLVar2 = (pWVar1->fields).winningConditionImages;
      if ((pLVar2 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) ||
         (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                             ), pIVar4 == (IEventSystemHandler *)0x0)) break;
      pLVar2 = (pWVar1->fields).winningConditionImages;
      if (*(undefined1 *)&pIVar4[1].klass == (undefined1)winningConditionType) {
        if ((((pLVar2 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) ||
             (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                 ), pIVar4 == (IEventSystemHandler *)0x0)) ||
            ((Component_1 *)pIVar4[1].monitor == (Component_1 *)0x0)) ||
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                                ((Component_1 *)pIVar4[1].monitor,(MethodInfo *)0x0),
           this_00 == (GameObject *)0x0)) break;
        this._0_1_ = 1;
      }
      else {
        if (((pLVar2 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) ||
            (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<WinningWarningNotification::WinninConditionImage>__get_Item_int_
                                ), pIVar4 == (IEventSystemHandler *)0x0)) ||
           (((Component_1 *)pIVar4[1].monitor == (Component_1 *)0x0 ||
            (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject
                                 ((Component_1 *)pIVar4[1].monitor,(MethodInfo *)0x0),
            this_00 == (GameObject *)0x0)))) break;
        this._0_1_ = 0;
      }
      winningConditionType = (GameStatCounterType__Enum)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(bool)this,(MethodInfo *)0x0);
      pLVar2 = (pWVar1->fields).winningConditionImages;
      index = index + 1;
      if (pLVar2 == (List_1_WinningWarningNotification_WinninConditionImage_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetWarningText(GameStatCounterType, Int32) */

void Assembly-CSharp.dll::WinningWarningNotification::WinningWarningNotification_SetWarningText
               (WinningWarningNotification *this,GameStatCounterType__Enum winningConditionType,
               int32_t scoreLeft,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  str0 = StringLiteral_STAR;
  if (((undefined1)winningConditionType != GameStatCounterType__Enum_Collectible) &&
     (((undefined1)winningConditionType == GameStatCounterType__Enum_Kill ||
      (str0 = TypeInfo__System__String->static_fields->Empty,
      (undefined1)winningConditionType == GameStatCounterType__Enum_OculusKill)))) {
    str0 = StringLiteral_KILL;
  }
  if (1 < scoreLeft) {
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str0 = mscorlib.dll::System::String::String_Concat_2(str0,StringLiteral_S,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Concat_2(str0,StringLiteral__LEFT_,(MethodInfo *)0x0);
  pTVar1 = (this->fields).warningText;
  if (pTVar1 == (Text *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(pTVar1->klass->vtable).set_text.method)(pTVar1);
  return;
}

