
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
  value = unaff_ESI;
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
    value = (Transform *)0x0;
    unaff_EDI = unaff_ESI;
    if (pMVar2 != (MonitorData *)0x0) {
      (**(code **)(*(int *)pMVar2 + 0x318))();
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)unaff_ESI,(MethodInfo *)0x0);
      if (((unaff_ESI[1].monitor != (MonitorData *)0x0) &&
          (iVar4 = (**(code **)(*(int *)unaff_ESI[1].monitor + 0x310))(), iVar4 != 0)) &&
         (value != (Transform *)0x0)) {
        pTVar5 = (Transform *)0x0;
        if (value->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
          pTVar5 = value;
        }
        if (pTVar5 != (Transform *)0x0) {
          pTVar5 = (Transform *)0x0;
          if (value->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            pTVar5 = value;
          }
          UnityEngine.CoreModule.dll::UnityEngine::RectTransform::
          RectTransform_SetSizeWithCurrentAnchors
                    ((RectTransform *)pTVar5,RectTransform_Axis__Enum_Horizontal,
                     (float)*(int *)(iVar4 + 8) * _UNK_?,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  uVar6 = func_?();
  value_00 = (Object *)uVar6;
  iVar4 = CONCAT31((int3)((uint)extraout_ECX >> 8),
                   (byte)extraout_ECX | (byte)((ulonglong)uVar6 >> 0x28));
  ppTVar7 = &value->klass + iVar4 * 2;
  bVar8 = (byte)((ulonglong)uVar6 >> 0x20);
  bVar9 = CARRY1(*(byte *)ppTVar7,bVar8);
  *(byte *)ppTVar7 = *(byte *)ppTVar7 + bVar8;
  cVar10 = *(char *)&value->klass;
  bVar8 = *(char *)&value->klass + unaff_BL;
  bVar11 = CARRY1(*(byte *)&value->klass,unaff_BL) || CARRY1(bVar8,bVar9);
  *(byte *)&value->klass = bVar8 + bVar9;
  pcVar12 = (code *)swi(4);
  if (SCARRY1(cVar10,unaff_BL) != SCARRY1(bVar8,bVar9)) {
    uVar6 = (*pcVar12)();
    iVar4 = extraout_ECX_00;
  }
  pbVar13 = (byte *)((ulonglong)uVar6 >> 0x20);
  bVar14 = (byte)((ulonglong)uVar6 >> 0x28);
  bVar8 = *pbVar13;
  bVar15 = *pbVar13 + bVar14;
  cVar10 = CARRY1(*pbVar13,bVar14) || CARRY1(bVar15,bVar11);
  *pbVar13 = bVar15 + bVar11;
  pcVar12 = (code *)swi(4);
  if (SCARRY1(bVar8,bVar14) != SCARRY1(bVar15,bVar11)) {
    uVar6 = (*pcVar12)();
    iVar4 = extraout_ECX_01;
  }
  pcVar16 = (char *)uVar6;
  uVar17 = (undefined6)uVar6;
  cVar18 = (char)((uint)iVar4 >> 8);
  cVar19 = *pcVar16;
  cVar20 = *pcVar16 + cVar18;
  *pcVar16 = cVar20 + cVar10;
  pcVar12 = (code *)swi(4);
  if (SCARRY1(cVar19,cVar18) != SCARRY1(cVar20,cVar10)) {
    uVar17 = (*pcVar12)();
    iVar4 = extraout_ECX_02;
  }
  in((short)((uint6)uVar17 >> 0x20));
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    ,iVar4,(int)uVar17);
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
                               ,unaff_EDI,value);
  pDVar21 = this_02;
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
               value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_02,(Object *)StringLiteral_ukey,
               (Object *)value,
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
    this_03 = (Post_FormPoster *)func_?();
    pSVar22 = StringLiteral_https___api_stathat_com;
    pSVar3 = StringLiteral__c;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this_03->fields).BaseUrl = pSVar22;
    ppSStack23 = &(this_03->fields).BaseUrl;
    pSStack24 = pSVar22;
    pDStack25 =
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         &UNK_?;
    func_?();
    pDStack25 = pDVar21;
    (this_03->fields).Parameters = (Dictionary_2_System_String_System_String_ *)pDStack25;
    pPStack26 = &this_03->fields;
    func_?();
    ppSStack27 = &(this_03->fields).RelUrl;
    (this_03->fields).RelUrl = pSVar3;
    pSStack28 = pSVar3;
    func_?();
    StatHat::Post+FormPoster::Post_FormPoster_PostForm(this_03,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

