
/* WARNING (jumptable): Unable to track spacebase fully for stack */
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
  pTVar1 = unaff_ESI;
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (MVLocalPlayer *)0x0)) {
    PVar2 = MVLocalPlayer::MVLocalPlayer_get_PlanetOwnership(this_01,(MethodInfo *)0x0);
    pMVar3 = unaff_ESI[1].monitor;
    switch(PVar2 & 0xff) {
    case PlanetOwnershipType__Enum_Editor:
      pSVar4 = StringLiteral_Editor;
      break;
    case PlanetOwnershipType__Enum_Owner:
      pSVar4 = StringLiteral_Owner;
      break;
    case PlanetOwnershipType__Enum_Playtester:
      pSVar4 = StringLiteral_Play_Tester;
      break;
    default:
      pSVar4 = StringLiteral_error;
      break;
    case PlanetOwnershipType__Enum_Spectator:
      pSVar4 = StringLiteral_Spectator;
    }
    TM::TM__(pSVar4,(MethodInfo *)0x0);
    pTVar1 = (Transform *)0x0;
    unaff_EDI = unaff_ESI;
    if (pMVar3 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar3 + 0x318))();
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar5 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar5 != 0)) &&
         (pTVar1 != (Transform *)0x0)) {
        pTVar6 = (Transform *)0x0;
        if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar6 = pTVar1;
        }
        bVar7 = 0;
        if (pTVar6 != (Transform *)0x0) {
          pTVar6 = (Transform *)0x0;
          if (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar6 = pTVar1;
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
  uVar8 = func_?();
  iVar5 = (int)uVar8;
  pbVar9 = (byte *)(extraout_ECX * 9 + 0x50);
  bVar10 = (byte)((ulonglong)uVar8 >> 0x28);
  bVar11 = *pbVar9 + bVar10;
  bVar12 = CARRY1(*pbVar9,bVar10) || CARRY1(bVar11,bVar7);
  *pbVar9 = bVar11 + bVar7;
  pbVar9 = (byte *)((int)&pTVar1[-5].monitor + 1);
  bVar11 = (byte)((uint)unaff_EBX >> 8);
  bVar7 = *pbVar9 + bVar11;
  bVar13 = CARRY1(*pbVar9,bVar11) || CARRY1(bVar7,bVar12);
  *pbVar9 = bVar7 + bVar12;
  pbVar9 = (byte *)((int)((ulonglong)uVar8 >> 0x20) + -0x77efaf37);
  bVar7 = *pbVar9;
  bVar10 = (byte)((ulonglong)uVar8 >> 0x20);
  bVar11 = *pbVar9;
  *pbVar9 = bVar11 + bVar10 + bVar13;
  *(char *)(iVar5 + -0x75) =
       *(char *)(iVar5 + -0x75) + bVar10 + (CARRY1(bVar7,bVar10) || CARRY1(bVar11 + bVar10,bVar13))
  ;
  in((short)((ulonglong)uVar8 >> 0x20));
  bVar12 = cRam_? == '\0';
  *(float *)(iVar5 + 0x10) = (float)*(int *)(iVar5 + 0x10);
  if (bVar12) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    ,extraout_ECX,iVar5);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
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
                               ,unaff_EDI,pTVar1);
  method_00 = 
  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
  ;
  *(Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ **)
   (iVar5 + -4) = this_02;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_02,method_00);
  if (this_02 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_key,
               *(Object **)(iVar5 + 8),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_ukey,
               *(Object **)(iVar5 + 0xc),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    pSVar4 = mscorlib.dll::System::Single::Single_ToString
                       ((Single *)(iVar5 + 0x10),(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_count,
               (Object *)pSVar4,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    method_01 = TypeInfo__StatHat__Post__FormPoster;
    this_03 = (Post_FormPoster *)func_?();
    pSVar14 = StringLiteral_https___api_stathat_com;
    pSVar4 = StringLiteral__c;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (this_03->fields).BaseUrl = pSVar14;
    ppSStack15 = &(this_03->fields).BaseUrl;
    pSStack16 = pSVar14;
    func_?();
    pDStack17 = *(Dictionary_2_System_String_System_String_ **)(iVar5 + -4);
    (this_03->fields).Parameters = pDStack17;
    pPStack18 = &this_03->fields;
    func_?();
    ppSStack19 = &(this_03->fields).RelUrl;
    (this_03->fields).RelUrl = pSVar4;
    pSStack20 = pSVar4;
    func_?();
    StatHat::Post+FormPoster::Post_FormPoster_PostForm(this_03,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}

