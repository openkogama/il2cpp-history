
/* Void Initialize(MVTeam, GameStatCounterType) */

void Assembly-CSharp.dll::TeamTab::TeamTab_Initialize
               (TeamTab *this,MVTeam__Enum team,GameStatCounterType__Enum statToDisplay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVPlayer>__get_Count__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                   );
    func_?(&TypeInfo__Styles);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((undefined1)statToDisplay == GameStatCounterType__Enum_None) {
    if (team != MVTeam__Enum_None) goto code_?;
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
       (pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 MVTeamManager::MVTeamManager_GetTeamList(pMVar2,(MethodInfo *)0x0),
       pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (pLVar3,0,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Item_int_
                       );
    pTVar5 = (this->fields).playerCount;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
       (pLVar6 = MVTeamManager::MVTeamManager_GetPlayersInTeam
                           (pMVar2,(MVTeam__Enum)RVar4,(MethodInfo *)0x0),
       pLVar6 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    IStack_7.m_value = (pLVar6->fields)._size;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    pTVar5 = (this->fields).score;
    if (pTVar5 == (Text *)0x0) goto code_?;
    pTVar8 = pTVar5->klass;
    pIVar9 = (pTVar8->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
    pSVar10 = ::StringLiteral__;
  }
  else {
    if (team == MVTeam__Enum_None) goto code_?;
    pTVar5 = (this->fields).score;
    if ((pTVar5 == (Text *)0x0) ||
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pTVar5,(MethodInfo *)0x0), this_00 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
code_?:
    pTVar5 = (this->fields).playerCount;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar1 == (MVNetworkGame *)0x0) ||
        (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0)) ||
       (pLVar6 = MVTeamManager::MVTeamManager_GetPlayersInTeam(pMVar2,team,(MethodInfo *)0x0),
       pLVar6 == (List_1_MVPlayer_ *)0x0)) goto code_?;
    IStack_7.m_value = (pLVar6->fields)._size;
    mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
    if (pTVar5 == (Text *)0x0) goto code_?;
    (*(code *)(pTVar5->klass->vtable).set_text.method)();
    pTVar5 = (this->fields).score;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (pMVar2 = (pMVar1->fields).teamManager, pMVar2 == (MVTeamManager *)0x0))
    goto code_?;
    score = MVTeamManager::MVTeamManager_GetScore(pMVar2,team,statToDisplay,(MethodInfo *)0x0);
    pSVar10 = WinningConditionControl::WinningConditionControl_MakeIntoScoreText
                       (score,statToDisplay,(MethodInfo *)0x0);
    if (pTVar5 == (Text *)0x0) goto code_?;
    pTVar8 = pTVar5->klass;
    pIVar9 = (pTVar8->vtable).CalculateLayoutInputHorizontal_1.methodPtr;
  }
  (*(code *)(pTVar8->vtable).set_text.method)(pTVar5,pSVar10,pIVar9);
  if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Styles);
  }
  pCVar11 = Styles::Styles_GetTeamColor((Color *)&stack0xffffffd4,team,0,(MethodInfo *)0x0);
  fVar12 = pCVar11->r;
  fVar13 = pCVar11->g;
  fVar14 = pCVar11->b;
  fVar15 = pCVar11->a;
  pCVar11 = Styles::Styles_GetTeamColor((Color *)&stack0xffffffd4,team,1,(MethodInfo *)0x0);
  iVar16 = 0;
  fVar17 = pCVar11->r;
  fVar18 = pCVar11->g;
  fVar19 = pCVar11->b;
  fVar20 = pCVar11->a;
  pLVar21 = (this->fields).teamColoredImages;
  if (pLVar21 != (List_1_UnityEngine_UI_Image_ *)0x0) {
    while (iVar16 < (pLVar21->fields)._size) {
      pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).teamColoredImages;
      if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                             (pLVar3,iVar16,
                              MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                             ), RVar4 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      (**(code **)(*(int *)RVar4 + 0x178))
                (RVar4,fVar12,fVar13,fVar14,fVar15,*(undefined4 *)(*(int *)RVar4 + 0x17c));
      pLVar21 = (this->fields).teamColoredImages;
      iVar16 = iVar16 + 1;
      if (pLVar21 == (List_1_UnityEngine_UI_Image_ *)0x0) goto code_?;
    }
    pLVar21 = (this->fields).darkTeamColoredImages;
    iVar16 = 0;
    if (pLVar21 != (List_1_UnityEngine_UI_Image_ *)0x0) goto code_?;
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
  while( true ) {
    (**(code **)(*(int *)RVar4 + 0x178))
              (RVar4,fVar17,fVar18,fVar19,fVar20,*(undefined4 *)(*(int *)RVar4 + 0x17c));
    pLVar21 = (this->fields).darkTeamColoredImages;
    iVar16 = iVar16 + 1;
    if (pLVar21 == (List_1_UnityEngine_UI_Image_ *)0x0) break;
code_?:
    if ((pLVar21->fields)._size <= iVar16) {
      image = (this->fields).teamImage;
      if ((TypeInfo__Styles->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Styles);
      }
      Styles::Styles_TeamToSprite(image,team,(MethodInfo *)0x0);
      return;
    }
    pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
             (this->fields).darkTeamColoredImages;
    if ((pLVar3 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
       (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                           (pLVar3,iVar16,
                            MethodInfo__System__Collections__Generic__List<UnityEngine::UI::Image>__get_Item_int_
                           ), RVar4 == (RegexCharClass_SingleRange)0x0)) break;
  }
  goto code_?;
}

