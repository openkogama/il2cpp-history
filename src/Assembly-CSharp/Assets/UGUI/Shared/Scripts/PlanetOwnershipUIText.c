
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
        bVar6 = 0;
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
  bVar6 = 0;
  func_?();
code_?:
  uVar7 = func_?();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  value_00 = (Object *)uVar7;
  pbVar8 = (byte *)(iVar4 + -0x55dbefb0);
  bVar9 = (byte)((ushort)extraout_CX >> 8);
  bVar10 = bVar9 - *pbVar8;
  bVar11 = bVar9 < *pbVar8 || bVar10 < bVar6;
  bVar10 = bVar10 - bVar6;
  bVar6 = *(char *)&value->klass + bVar10;
  bVar12 = CARRY1(*(byte *)&value->klass,bVar10) || CARRY1(bVar6,bVar11);
  *(byte *)&value->klass = bVar6 + bVar11;
  bVar13 = (byte)uVar7;
  *(byte *)&unaff_EDI->klass = bVar13;
  pbVar8 = (byte *)(iVar4 + -0x56);
  bVar6 = *pbVar8;
  bVar9 = *pbVar8;
  *pbVar8 = bVar9 + bVar13 + bVar12;
  *(char *)&value_00->klass =
       *(char *)&value_00->klass + (char)((uint)unaff_EBX >> 8) +
       (CARRY1(bVar6,bVar13) || CARRY1(bVar9 + bVar13,bVar12));
  *(byte *)((int)&unaff_EDI->klass + 1) = bVar13;
  in((short)((ulonglong)uVar7 >> 0x20));
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                    ,CONCAT11(bVar10,(char)extraout_CX),value_00,value_00);
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
                               ,(undefined1 *)((int)&unaff_EDI->klass + 2),value);
  pDVar14 = this_02;
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
    pSVar15 = StringLiteral_https___api_stathat_com;
    pSVar3 = StringLiteral__c;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this_03,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    (this_03->fields).BaseUrl = pSVar15;
    ppSStack16 = &(this_03->fields).BaseUrl;
    pSStack17 = pSVar15;
    pDStack18 =
         (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         &UNK_?;
    func_?();
    pDStack18 = pDVar14;
    (this_03->fields).Parameters = (Dictionary_2_System_String_System_String_ *)pDStack18;
    pPStack19 = &this_03->fields;
    func_?();
    ppSStack20 = &(this_03->fields).RelUrl;
    (this_03->fields).RelUrl = pSVar3;
    pSStack21 = pSVar3;
    func_?();
    StatHat::Post+FormPoster::Post_FormPoster_PostForm(this_03,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}

