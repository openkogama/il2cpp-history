
/* Void ChangeStatType(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ChangeStatType
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  (this->fields).statType = (undefined1)statType;
  (*(code *)(this->klass->vtable).ReSortScoreBoard.method)
            (this,(this->klass->vtable).IsNewScoreBetter.methodPtr);
  return;
}


/* Color GetBackgroundColor(Int32) */

Color * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_GetBackgroundColor
                  (Color *__return_storage_ptr__,ScoreBoardBase *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar1 = Styles::Styles_GetColor
                     (&CStack_2,ColorStyle__Enum_OffWhiteTransparent,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = (this->fields).backgroundAlpha;
  __return_storage_ptr__->r = pCVar1->r;
  __return_storage_ptr__->g = fVar3;
  __return_storage_ptr__->b = fVar4;
  __return_storage_ptr__->a = fVar5;
  return __return_storage_ptr__;
}


/* Boolean HandleAlreadyOnScoreBoard(Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_HandleAlreadyOnScoreBoard
               (ScoreBoardBase *this,int32_t id,int32_t newScore,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  do {
    if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
code_?:
      func_?(0);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    pOVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    if ((int)pOVar4 <= index) {
      return 0;
    }
    pLVar1 = (this->fields).scoreBoardPlayerData;
    if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
    pLVar1 = (this->fields).scoreBoardPlayerData;
    if ((MonitorData *)id == pIVar5[2].monitor) {
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
      pIVar6 = pIVar5[3].klass;
      bVar3 = ScoreBoardBase_IsNewScoreBetter_1
                        (this,newScore,(int32_t)pIVar6,0,(int32_t)method,in_stack_7);
      if (bVar3 != 0) {
        pLVar1 = (this->fields).scoreBoardPlayerData;
        if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
        pIVar5[3].klass = (IEventSystemHandler__Class *)newScore;
        pLVar1 = (this->fields).scoreBoardPlayerData;
        if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
           (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
        pIVar8 = pIVar5[1].klass;
        uVar9 = func_?();
        if (pIVar8 == (IEventSystemHandler__Class *)0x0) goto code_?;
        func_?(0x49,pIVar8,uVar9);
        if ((int)pIVar6 < 0) {
          pLVar1 = (this->fields).scoreBoardPlayerData;
          if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
             (pIVar5 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                       ::IEventSystemHandler]::
                       List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                 ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                  index,
                                  MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                                 ), pIVar5 == (IEventSystemHandler *)0x0)) goto code_?;
          pIVar6 = pIVar5[1].klass;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          if (pIVar6 == (IEventSystemHandler__Class *)0x0) goto code_?;
          func_?(0x49,pIVar6,TypeInfo__System__String->static_fields->Empty);
        }
      }
      return 1;
    }
    index = index + 1;
  } while( true );
}


/* Void Initialize(GameStatCounterType) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_Initialize
               (ScoreBoardBase *this,GameStatCounterType__Enum statType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).statType = (undefined1)statType;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
               MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
    pAVar3 = (Action_1_IWinningCondition_ *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_1_IWinningCondition_ *)0x0;
    if (pAVar3 != (Action_1_IWinningCondition_ *)0x0) {
      if (pAVar3->klass == TypeInfo__System__Action<IWinningCondition>) {
        pAVar2 = pAVar3;
      }
      pAVar4 = TypeInfo__System__Action<IWinningCondition>;
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
    }
    (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
    pLVar5 = (this->fields).scoreBoardPlayerData;
    if (pLVar5 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar5,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      if ((int)pOVar6 < 1) {
        return;
      }
      pLVar5 = (this->fields).scoreBoardPlayerData;
      if (((pLVar5 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
          (pIVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar5,0,
                               MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ), pIVar7 != (IEventSystemHandler *)0x0)) &&
         (pMVar8 = pIVar7[3].monitor, pMVar8 != (MonitorData *)0x0)) {
        iVar9 = (**(code **)(*(int *)pMVar8 + 0x170))
                          (auStack_10,pMVar8,*(undefined4 *)(*(int *)pMVar8 + 0x174));
        (this->fields).backgroundAlpha = *(float *)(iVar9 + 0xc);
        return;
      }
    }
  }
  func_?(0);
  pAVar3 = extraout_ECX;
  pAVar4 = extraout_EDX;
code_?:
  func_?(pAVar3,pAVar4);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean IsNewScoreBetter(Int32, Int32, Int32, Int32) */

bool Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_IsNewScoreBetter_1
               (ScoreBoardBase *this,int32_t newScore,int32_t oldScore,int32_t newId,int32_t oldId,
               MethodInfo *method)

{
  this = (ScoreBoardBase *)CONCAT31(this._1_3_,(this->fields).statType);
  bVar1 = WinningConditionControl::WinningConditionControl_IsNewScoreBetter
                    (newScore,oldScore,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
  return bVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_OnDestroy
               (ScoreBoardBase *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).UnSubscribeToCallbacks.method)
            (this,(this->klass->vtable).GetBackgroundColor.methodPtr);
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_OnWinningConditionFulfilled
               (ScoreBoardBase *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar3[3].klass = (IEventSystemHandler__Class *)0x0;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar4 = pIVar3[1].klass;
      uVar5 = (*(code *)(this->klass->vtable).ScoreIntoString.method)();
      if (pIVar4 == (IEventSystemHandler__Class *)0x0) break;
      pIVar6 = (pIVar4->_0).image;
      (*(code *)pIVar6[0x11].nameToClassHashTable)(pIVar4,uVar5,pIVar6[0x11].codeGenModule);
      pLVar1 = (this->fields).scoreBoardPlayerData;
      index = index + 1;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ReSortScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ReSortScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar3[3].klass = (IEventSystemHandler__Class *)0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar3[2].monitor = (MonitorData *)0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      *(undefined1 *)&pIVar3[5].klass = 0;
      index = index + 1;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetScoreBoard() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ResetScoreBoard
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  index = 0;
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if (pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while( true ) {
      pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      if ((int)pOVar2 <= index) {
        return;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar3[3].klass = (IEventSystemHandler__Class *)0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      pIVar3[2].monitor = (MonitorData *)0xffffffff;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 == (IEventSystemHandler *)0x0)) break;
      *(undefined1 *)&pIVar3[5].klass = 0;
      index = index + 1;
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if (pLVar1 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) break;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* String ScoreIntoString(Int32) */

String * Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_ScoreIntoString
                   (ScoreBoardBase *this,int32_t score,MethodInfo *method)

{
  this = (ScoreBoardBase *)CONCAT31(this._1_3_,(this->fields).statType);
  pSVar1 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                     (score,(GameStatCounterType__Enum)this,(MethodInfo *)0x0);
  return pSVar1;
}


/* Void SetActiveMemberUI(Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetActiveMemberUI
               (ScoreBoardBase *this,int32_t index,bool shouldBeActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).scoreBoardPlayerData;
  if ((pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
     (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar2 != (IEventSystemHandler *)0x0)) {
    pIVar3 = pIVar2[4].klass;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pIVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      return;
    }
    pLVar1 = (this->fields).scoreBoardPlayerData;
    if (((pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
        (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), pIVar2 != (IEventSystemHandler *)0x0)) &&
       (pIVar2[4].klass != (IEventSystemHandler__Class *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pIVar2[4].klass,shouldBeActive,(MethodInfo *)0x0);
      if (shouldBeActive == 0) {
        return;
      }
      pLVar1 = (this->fields).scoreBoardPlayerData;
      if ((pLVar1 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
         (pIVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar2 != (IEventSystemHandler *)0x0)) {
        pIVar3 = pIVar2[2].klass;
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        if (pIVar3 != (IEventSystemHandler__Class *)0x0) {
          pIVar5 = (pIVar3->_0).image;
          (*(code *)pIVar5[0x11].nameToClassHashTable)
                    (pIVar3,TypeInfo__System__String->static_fields->Empty,
                     pIVar5[0x11].codeGenModule);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetPlacementTextForIndex(Int32) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SetPlacementTextForIndex
               (ScoreBoardBase *this,int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pLVar2 = (this->fields).scoreBoardPlayerData;
  if ((pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
     (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar3 != (IEventSystemHandler *)0x0)) {
    pIVar4 = pIVar3[2].klass;
    iStack_1 = index + 1;
    uVar5 = func_?(&iStack_1,0);
    if (pIVar4 != (IEventSystemHandler__Class *)0x0) {
      (*(code *)(pIVar4->_0).image[0x11].nameToClassHashTable)(pIVar4,uVar5);
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if ((pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
         (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             ), pIVar3 != (IEventSystemHandler *)0x0)) {
        exists = (Object_1 *)pIVar3[4].monitor;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          (exists,(MethodInfo *)0x0);
        if (bVar6 == 0) {
          return;
        }
        pLVar2 = (this->fields).scoreBoardPlayerData;
        if ((pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) &&
           (pIVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,index
                                ,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar3 != (IEventSystemHandler *)0x0)) {
          pMVar7 = pIVar3[4].monitor;
          uVar5 = func_?(&stack0xfffffff4);
          if (pMVar7 != (MonitorData *)0x0) {
            (**(code **)(*(int *)pMVar7 + 0x308))(pMVar7,uVar5);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SortNewScore(String, Int32, Int32, Boolean) */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_SortNewScore
               (ScoreBoardBase *this,String *playerName,int32_t id,int32_t scoreCount,
               bool activateMemberUI,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = ScoreBoardBase_HandleAlreadyOnScoreBoard(this,id,scoreCount,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)((int)&pOVar3[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
    pIVar4[3].klass = (IEventSystemHandler__Class *)scoreCount;
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)((int)&pOVar3[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if ((pIVar4 == (IEventSystemHandler *)0x0) || (pIVar4[1].monitor == (MonitorData *)0x0))
    goto code_?;
    (**(code **)(*(int *)pIVar4[1].monitor + 0x308))();
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)((int)&pOVar3[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
    pMVar5 = pIVar4[3].monitor;
    (*(code *)(this->klass->vtable).GetBackgroundColor.method)();
    if (pMVar5 == (MonitorData *)0x0) goto code_?;
    (**(code **)(*(int *)pMVar5 + 0x178))();
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)((int)&pOVar3[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
    pIVar4[2].monitor = (MonitorData *)id;
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    in_stack_6 = (MethodInfo *)((int)&pOVar3[-1].monitor + 3);
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)in_stack_6,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
    pIVar7 = pIVar4[1].klass;
    (*(code *)(this->klass->vtable).ScoreIntoString.method)();
    if (pIVar7 == (IEventSystemHandler__Class *)0x0) goto code_?;
    (*(code *)(pIVar7->_0).image[0x11].nameToClassHashTable)();
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                       );
    pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
             IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                       ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                        (int32_t)((int)&pOVar3[-1].monitor + 3),
                        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                       );
    if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
    *(bool *)&pIVar4[5].klass = activateMemberUI;
    if (id < 0) {
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                         );
      in_stack_6 = (MethodInfo *)((int)&pOVar3[-1].monitor + 3);
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                          (int32_t)in_stack_6,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         );
      if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
      pIVar7 = pIVar4[1].klass;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      if (pIVar7 == (IEventSystemHandler__Class *)0x0) goto code_?;
      (*(code *)(pIVar7->_0).image[0x11].nameToClassHashTable)();
    }
  }
  this_01 = (Object_1__Class *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_01,
             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__List__);
  pLVar2 = (this->fields).scoreBoardPlayerData;
  scoreCount = 0;
  if (pLVar2 != (List_1_ScoreBoardBase_ScoreData_ *)0x0) {
    while (iVar8 = scoreCount,
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar2,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                             ), iVar8 < (int)pOVar3) {
      pMVar9 = (MethodInfo *)0x0;
      while( true ) {
        if (this_01 == (Object_1__Class *)0x0) goto code_?;
        pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                           );
        pMVar10 = 
        MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_;
        pLVar2 = (this->fields).scoreBoardPlayerData;
        if ((int)pOVar3 <= (int)pMVar9) {
          if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
          scoreCount = (int32_t)
                       MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
          ;
          pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                              (int32_t)
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                              ,
                              MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                             );
          scoreCount = (int32_t)
                       MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
          ;
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
                    ((List_1_UIPushOption_ *)this_01,(UIPushOption__Enum)pIVar4,
                     MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Add_ScoreBoardBase__ScoreData_
                    );
          goto code_?;
        }
        if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
        scoreCount = (int32_t)
                     MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
        ;
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                            (int32_t)
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           );
        if (pIVar4 == (IEventSystemHandler *)0x0) goto code_?;
        scoreCount = (int32_t)&UNK_?;
        _activateMemberUI = this_01;
        method = pMVar9;
        pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                 IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                           ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                            (int32_t)pMVar9,
                            MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                           );
        if ((((pIVar4 == (IEventSystemHandler *)0x0) ||
             (pLVar2 = (this->fields).scoreBoardPlayerData,
             pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0)) ||
            (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,
                                 scoreCount,
                                 MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                                ), pIVar4 == (IEventSystemHandler *)0x0)) ||
           (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                     IEventSystemHandler]::
                     List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                               ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                (int32_t)pMVar9,
                                MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                               ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
        cVar11 = func_?();
        if (cVar11 != '\0') break;
        pMVar9 = (MethodInfo *)((int)&pMVar9->methodPointer + 1);
      }
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
      pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,scoreCount,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         );
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__Insert_int__ScoreBoardBase__ScoreData_
      ;
      item.rgba = (int32_t)pIVar4;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
      List_1_UnityEngine_Color32__Insert
                ((List_1_UnityEngine_Color32_ *)this_01,(int32_t)pMVar9,item,in_stack_6);
      pMVar10 = (MethodInfo *)scoreCount;
code_?:
      pLVar2 = (this->fields).scoreBoardPlayerData;
      scoreCount = (int)&pMVar10->methodPointer + 1;
      if (pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) goto code_?;
    }
    (this->fields).scoreBoardPlayerData = (List_1_ScoreBoardBase_ScoreData_ *)this_01;
    iVar8 = 0;
    if (this_01 != (Object_1__Class *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
code_?:
  iVar13 = iVar8;
  pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
           Serialization::JsonProperty]::
           Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                     ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                      MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Count__
                     );
  if ((int)pOVar3 <= iVar13) {
    scoreCount = (int32_t)this->klass[1]._0.image;
    (*(code *)(this->klass->vtable).__unknown_1.method)();
    return;
  }
  if (cRam_? == '\0') {
    scoreCount = _UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).scoreBoardPlayerData;
  scoreCount = 0;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
  pIVar7 = pIVar4[2].klass;
  scoreCount = (int32_t)&scoreCount;
  _activateMemberUI = (Object_1__Class *)0x0;
  func_?();
  if (pIVar7 == (IEventSystemHandler__Class *)0x0) goto code_?;
  (*(code *)(pIVar7->_0).image[0x11].nameToClassHashTable)();
  pLVar2 = (this->fields).scoreBoardPlayerData;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (iVar13 = iVar8,
     pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
              IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                        ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                         MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                        ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
  exists = (Object_1 *)pIVar4[4].monitor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    (exists,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
       (iVar13 = iVar8,
       pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
    pMVar5 = pIVar4[4].monitor;
    func_?();
    if (pMVar5 == (MonitorData *)0x0) goto code_?;
    (**(code **)(*(int *)pMVar5 + 0x308))();
  }
  pLVar2 = (this->fields).scoreBoardPlayerData;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
  cVar11 = *(char *)&pIVar4[5].klass;
  if (cRam_? == '\0') {
    _activateMemberUI = _UNK_?;
    scoreCount = (int32_t)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pLVar2 = (this->fields).scoreBoardPlayerData;
  if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
     (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
               IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                         ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                          MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                         ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
  pIVar7 = pIVar4[4].klass;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    _activateMemberUI = TypeInfo__UnityEngine__Object;
    scoreCount = (int32_t)&UNK_?;
    func_?();
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pIVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pLVar2 = (this->fields).scoreBoardPlayerData;
    if (((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
        (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), pIVar4 == (IEventSystemHandler *)0x0)) ||
       (pIVar4[4].klass == (IEventSystemHandler__Class *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              ((GameObject *)pIVar4[4].klass,0,(MethodInfo *)0x0);
    if (cVar11 != '\0') {
      pLVar2 = (this->fields).scoreBoardPlayerData;
      if ((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
         (iVar13 = iVar8,
         pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                             MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                            ), pIVar4 == (IEventSystemHandler *)0x0)) goto code_?;
      pIVar7 = pIVar4[2].klass;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      if (pIVar7 == (IEventSystemHandler__Class *)0x0) goto code_?;
      (*(code *)(pIVar7->_0).image[0x11].nameToClassHashTable)();
    }
  }
  pLVar2 = (this->fields).scoreBoardPlayerData;
  if (((pLVar2 == (List_1_ScoreBoardBase_ScoreData_ *)0x0) ||
      (pIVar4 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                IEventSystemHandler]::List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                          ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar2,iVar8,
                           MethodInfo__System__Collections__Generic__List<ScoreBoardBase::ScoreData>__get_Item_int_
                          ), pIVar4 == (IEventSystemHandler *)0x0)) ||
     (this_00 = (Component_1 *)pIVar4[3].monitor, this_00 == (Component_1 *)0x0))
  goto code_?;
  _activateMemberUI = (Object_1__Class *)0x0;
  scoreCount = (int32_t)this_00;
  pMVar9 = (MethodInfo *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     (this_00,(MethodInfo *)0x0);
  if (pMVar9 == (MethodInfo *)0x0) goto code_?;
  _activateMemberUI = (Object_1__Class *)&UNK_?;
  method = pMVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
            ((Transform *)pMVar9,(MethodInfo *)0x0);
  this_01 = (Object_1__Class *)(this->fields).scoreBoardPlayerData;
  iVar8 = iVar13;
  if (this_01 == (Object_1__Class *)0x0) goto code_?;
  goto code_?;
}


/* Void UnSubscribeToCallbacks() */

void Assembly-CSharp.dll::ScoreBoardBase::ScoreBoardBase_UnSubscribeToCallbacks
               (ScoreBoardBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        pAStack3 = extraout_ECX;
        pAStack4 = extraout_EDX;
code_?:
        func_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pAVar6 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)this,
                 MethodInfo__ScoreBoardBase__OnWinningConditionFulfilled_IWinningCondition_,
                 MethodInfo__System__Action<IWinningCondition>__Action_System__Object__void__);
      pAStack3 =
           (Action_1_IWinningCondition_ *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar6 = (Action_1_IWinningCondition_ *)0x0;
      if (pAStack3 != (Action_1_IWinningCondition_ *)0x0) {
        if (pAStack3->klass == TypeInfo__System__Action<IWinningCondition>) {
          pAVar6 = pAStack3;
        }
        pAStack4 = TypeInfo__System__Action<IWinningCondition>;
        if (pAVar6 == (Action_1_IWinningCondition_ *)0x0) goto code_?;
      }
      (pMVar2->fields).OnWinningConditionFulfilled = pAVar6;
    }
  }
  return;
}

