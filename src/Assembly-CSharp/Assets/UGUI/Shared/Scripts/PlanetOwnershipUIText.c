
/* Void Awake() */

void Assembly-CSharp.dll::Assets::UGUI::Shared::Scripts::PlanetOwnershipUIText::
     PlanetOwnershipUIText_Awake(PlanetOwnershipUIText *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&StringLiteral_Editor);
    func_?(&StringLiteral_Play_Tester);
    func_?(&StringLiteral_Owner);
    func_?(&StringLiteral_Spectator);
    func_?(&StringLiteral_error);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar1 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pMVar2 = unaff_ESI[1].monitor;
    switch(PVar1 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      pSVar3 = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      pSVar3 = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      pSVar3 = StringLiteral_Play_Tester;
      break;
    default:
      pSVar3 = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      pSVar3 = StringLiteral_Spectator;
    }
    TM::TM__(pSVar3,(MethodInfo *)0x0);
    unaff_EDI = unaff_ESI;
    if (pMVar2 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar2 + 0x318))();
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar5 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar5 != 0)) &&
         (pTVar4 != (Transform *)0x0)) {
        pTVar6 = (Transform *)0x0;
        if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar6 = pTVar4;
        }
        bVar7 = 0;
        if (pTVar6 != (Transform *)0x0) {
          pTVar6 = (Transform *)0x0;
          if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar6 = pTVar4;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pTVar6,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar5 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  bVar7 = 0;
  func_?();
code_?:
  func_?();
  bVar7 = CARRY1(extraout_AH,extraout_AH) || CARRY1(extraout_AH * '\x02',bVar7);
  pcVar8 = (code *)swi(0x50);
  (*pcVar8)();
  cVar9 = CARRY1(extraout_DH,extraout_CH) || CARRY1(extraout_DH + extraout_CH,bVar7);
  pcVar8 = (code *)swi(0x50);
  cVar10 = (*pcVar8)();
  cVar11 = *extraout_EDX;
  cVar12 = *extraout_EDX;
  *extraout_EDX = cVar12 + cVar10 + cVar9;
  pcVar8 = (code *)swi(4);
  if (SCARRY1(cVar11,cVar10) != SCARRY1(cVar12 + cVar10,cVar9)) {
    (*pcVar8)();
  }
  pcVar8 = (code *)swi(0x50);
  (*pcVar8)();
  in(extraout_DX);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    func_?(&TypeInfo__StatHat__Post__FormPoster);
    func_?(&StringLiteral_count);
    func_?(&StringLiteral__c);
    func_?(&StringLiteral_ukey);
    func_?(&StringLiteral_https___api_stathat_com);
    func_?(&StringLiteral_key);
    cRam_? = '\x01';
  }
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                               ,unaff_EDI);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  if (this_02 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_key,
               unaff_EBX,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_ukey,
               value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar3 = mscorlib.dll::System::Single::Single_ToString
                        ((Single *)&stack0x0000000c,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_count,
               (Object *)pSVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    method_00 = TypeInfo__StatHat__Post__FormPoster;
    this_03 = (Dictionary_2_System_String_System_String_ *)func_?();
    pSVar13 = StringLiteral_https___api_stathat_com;
    pSVar3 = StringLiteral__c;
    pDVar14 = this_03;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    ((Post_FormPoster__Fields *)&this_03->fields)->BaseUrl = pSVar13;
    ppSStack15 = &((Post_FormPoster__Fields *)&this_03->fields)->BaseUrl;
    pSStack16 = pSVar13;
    func_?();
    pDStack17 = pDVar14;
    ((Post_FormPoster__Fields *)&this_03->fields)->Parameters = pDStack17;
    pDStack18 = &this_03->fields;
    func_?();
    ppDStack19 = &(this_03->fields)._entries;
    (this_03->fields)._entries =
         (Dictionary_2_TKey_TValue_Entry_System_String_System_String___Array *)pSVar3;
    pSStack20 = pSVar3;
    func_?();
    StatHat::Post+FormPoster::Post_FormPoster_PostForm((Post_FormPoster *)this_03,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

