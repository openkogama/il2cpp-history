
/* Void Initialize(MVTeam, GameStatCounterType) */

void Assembly-CSharp.dll::TeamTab::TeamTab_Initialize
               (TeamTab *this,MVTeam__Enum team,GameStatCounterType__Enum statToDisplay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  if ((char)statToDisplay == '\0') {
code_?:
    if (team == MVTeam__Enum_None) goto code_?;
    pTVar3 = (this->fields).playerCount;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar4 == (MVNetworkGame *)0x0) ||
        (pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar4,(MethodInfo *)0x0), pSVar5 == (SkyParam *)0x0))
       || (pLVar6 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                              ((MVTeamManager *)pSVar5,team,(MethodInfo *)0x0),
          pLVar6 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    pOStack_2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    uVar7 = func_?(&pOStack_2,0);
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,uVar7,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar3 = (this->fields).score;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar4 == (MVNetworkGame *)0x0) ||
       (pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                           ((DayNightCycle *)pMVar4,(MethodInfo *)0x0), pSVar5 == (SkyParam *)0x0))
    goto code_?;
    score = MVTeamManager::MVTeamManager_GetScore
                      ((MVTeamManager *)pSVar5,team,statToDisplay,(MethodInfo *)0x0);
    pSVar8 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (score,statToDisplay,(MethodInfo *)0x0);
    if (pTVar3 == (Text *)0x0) goto code_?;
    pIVar9 = (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pMVar10 = (pTVar3->klass->vtable).set_text.method;
  }
  else {
    if (team != MVTeam__Enum_None) {
      pTVar3 = (this->fields).score;
      if ((pTVar3 == (Text *)0x0) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)pTVar3,(MethodInfo *)0x0),
         this_00 == (GameObject *)0x0)) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      goto code_?;
    }
code_?:
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar4 == (MVNetworkGame *)0x0) ||
        (pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar4,(MethodInfo *)0x0), pSVar5 == (SkyParam *)0x0))
       || (this_01 = MVTeamManager::MVTeamManager_GetTeamList
                               ((MVTeamManager *)pSVar5,(MethodInfo *)0x0),
          this_01 == (List_1_MV_WorldObject_MVTeam_ *)0x0)) goto code_?;
    team_00 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::MVTeam]::
              List_1_MV_WorldObject_MVTeam__get_Item
                        (this_01,0,
                         MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                        );
    pTVar3 = (this->fields).playerCount;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar4 == (MVNetworkGame *)0x0) ||
        (pSVar5 = DayNightCycle::DayNightCycle_get_CurrentSkyParam
                            ((DayNightCycle *)pMVar4,(MethodInfo *)0x0), pSVar5 == (SkyParam *)0x0))
       || (pLVar6 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                              ((MVTeamManager *)pSVar5,team_00,(MethodInfo *)0x0),
          pLVar6 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    pOStack_1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar6,
                           MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    uVar7 = func_?(&pOStack_1,0);
    if (pTVar3 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar3->klass->vtable).set_text.method)
              (pTVar3,uVar7,(pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    pTVar3 = (this->fields).score;
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    if (pTVar3 == (Text *)0x0) goto code_?;
    pIVar9 = (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSVar8 = TypeInfo__System__String->static_fields->Empty;
    pMVar10 = (pTVar3->klass->vtable).set_text.method;
  }
  (*(code *)pMVar10)(pTVar3,pSVar8,pIVar9);
  if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__Styles->_1).cctor_started == 0)) {
    func_?(TypeInfo__Styles);
  }
  pCVar11 = Styles::Styles_GetTeamColor(&CStack_12,team,0,(MethodInfo *)0x0);
  fStack_13 = pCVar11->r;
  fStack_14 = pCVar11->g;
  fStack_15 = pCVar11->b;
  fStack_16 = pCVar11->a;
  pCVar11 = Styles::Styles_GetTeamColor(&CStack_12,team,1,(MethodInfo *)0x0);
  iVar17 = 0;
  CStack_12.r = pCVar11->r;
  CStack_12.g = pCVar11->g;
  CStack_12.b = pCVar11->b;
  CStack_12.a = pCVar11->a;
  pLVar18 = (this->fields).teamColoredImages;
  if (pLVar18 != (List_1_UnityEngine_UI_Image_ *)0x0) {
    while (pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                               ), iVar17 < (int)pOVar19) {
      pLVar18 = (this->fields).teamColoredImages;
      if ((pLVar18 == (List_1_UnityEngine_UI_Image_ *)0x0) ||
         (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                    IEventSystemHandler]::
                    List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                              ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,
                               iVar17,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                              ), pIVar20 == (IEventSystemHandler *)0x0)) goto code_?;
      CStack_12.g = (float)pIVar20->klass[2]._0.gc_desc;
      CStack_12.r = fStack_16;
      (*(code *)pIVar20->klass[2]._0.image)(pIVar20,fStack_13,fStack_14,fStack_15);
      pLVar18 = (this->fields).teamColoredImages;
      iVar17 = iVar17 + 1;
      if (pLVar18 == (List_1_UnityEngine_UI_Image_ *)0x0) goto code_?;
    }
    pLVar18 = (this->fields).darkTeamColoredImages;
    iVar17 = 0;
    if (pLVar18 != (List_1_UnityEngine_UI_Image_ *)0x0) goto code_?;
  }
code_?:
  func_?(0);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
  while( true ) {
    CStack_12.g = (float)pIVar20->klass[2]._0.gc_desc;
    CStack_12.r = CStack_12.a;
    (*(code *)pIVar20->klass[2]._0.image)(pIVar20,fVar22,fVar23,CStack_12.b);
    pLVar18 = (this->fields).darkTeamColoredImages;
    iVar17 = iVar17 + 1;
    if (pLVar18 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
code_?:
    pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar18,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                        );
    if ((int)pOVar19 <= iVar17) {
      image = (this->fields).teamImage;
      if ((((uint)(TypeInfo__Styles->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Styles->_1).cctor_started == 0)) {
        func_?(TypeInfo__Styles);
      }
      Styles::Styles_TeamToSprite(image,team,(MethodInfo *)0x0);
      return;
    }
    pLVar18 = (this->fields).darkTeamColoredImages;
    if ((pLVar18 == (List_1_UnityEngine_UI_Image_ *)0x0) ||
       (pIVar20 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                  IEventSystemHandler]::
                  List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                            ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar18,iVar17,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                            ), fVar23 = CStack_12.g, fVar22 = CStack_12.r,
       pIVar20 == (IEventSystemHandler *)0x0)) break;
  }
  goto code_?;
}

