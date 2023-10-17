
/* CelestialParam GetParamPerTime(Single) */

CelestialParam * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::CelestialParamsList_GetParamPerTime(CelestialParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_);
    func_?(&TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>);
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    in_stack_1 = &MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__);
    func_?(&StringLiteral_Celestial_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 == (DotParamsList_1_CelestialParam_ *)0x0) goto code_?;
  if ((pDVar2->fields)._._size < 1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning((Object *)StringLiteral_Celestial_params_list_is_empty,(MethodInfo *)0x0);
    pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
    value = (Object *)func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
    if (value == (Object *)0x0) goto code_?;
    value[1].monitor = (MonitorData *)0x3f000000;
    value[2].klass = (Object__Class *)0x3f000000;
    value[2].monitor = (MonitorData *)0x3f000000;
    value[3].klass = (Object__Class *)0x3f800000;
    value[3].monitor = (MonitorData *)0x3f000000;
    value[4].klass = (Object__Class *)0x3f000000;
    value[4].monitor = (MonitorData *)0x3f000000;
    value[5].klass = (Object__Class *)0x3f800000;
    value[5].monitor = (MonitorData *)0x3f800000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23(value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__Add(pSVar3,0.0,value,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_);
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_CelestialParam_ *)0x0) {
    iVar4 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime((DotParamsList_1_System_Object_ *)pDVar2,currentTime,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_);
    pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
    if (iVar4 < 1) {
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      iVar4 = (pSVar3->fields)._size;
    }
    else if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
    pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__);
    if (pIVar5 != (IList_1_System_Single_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar4 + -1);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      fVar7 = (float)fVar6;
      if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) && (pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__), pIVar8 != (IList_1_System_Object_ *)0x0)) && (iVar9 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>,pIVar8,iVar4 + -1), iVar9 != 0)) {
        fVar10 = *(float *)(iVar9 + 0xc);
        fVar11 = *(float *)(iVar9 + 0x10);
        fVar12 = *(float *)(iVar9 + 0x14);
        fVar13 = *(float *)(iVar9 + 0x18);
        fVar14 = *(float *)(iVar9 + 0x1c);
        fVar15 = *(float *)(iVar9 + 0x20);
        fVar16 = *(float *)(iVar9 + 0x24);
        fVar17 = *(float *)(iVar9 + 0x28);
        fVar18 = *(float *)(iVar9 + 0x2c);
        pDVar2 = (this->fields)._.SortedParams;
        if (pDVar2 != (DotParamsList_1_CelestialParam_ *)0x0) {
          iVar9 = 0;
          if (iVar4 < (pDVar2->fields)._._size) {
            iVar9 = iVar4;
          }
          pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys((SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__);
          if (pIVar5 != (IList_1_System_Single_ *)0x0) {
            fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar9);
            pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
            fVar19 = (float)fVar6;
            if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) && (pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__), pIVar8 != (IList_1_System_Object_ *)0x0)) && (iVar9 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>,pIVar8,iVar9), iVar9 != 0)) {
              fVar20 = *(float *)(iVar9 + 0xc);
              fVar21 = *(float *)(iVar9 + 0x10);
              fVar22 = *(float *)(iVar9 + 0x14);
              fVar23 = *(float *)(iVar9 + 0x18);
              fVar24 = *(float *)(iVar9 + 0x1c);
              fVar25 = *(float *)(iVar9 + 0x20);
              fVar26 = *(float *)(iVar9 + 0x24);
              fVar27 = *(float *)(iVar9 + 0x28);
              fVar28 = *(float *)(iVar9 + 0x2c);
              if (currentTime <= fVar7) {
                fVar29 = currentTime + (100.0 - fVar7);
              }
              else {
                fVar29 = currentTime - fVar7;
              }
              if (fVar19 <= fVar7) {
                fVar19 = fVar19 + 100.0;
              }
              fVar29 = fVar29 / (fVar19 - fVar7);
              pCVar30 = (CelestialParam *)func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
              if (pCVar30 != (CelestialParam *)0x0) {
                (pCVar30->fields).TintColor.r = 0.5;
                (pCVar30->fields).TintColor.g = 0.5;
                (pCVar30->fields).TintColor.b = 0.5;
                (pCVar30->fields).TintColor.a = 1.0;
                (pCVar30->fields).LightColor.r = 0.5;
                (pCVar30->fields).LightColor.g = 0.5;
                (pCVar30->fields).LightColor.b = 0.5;
                (pCVar30->fields).LightColor.a = 1.0;
                (pCVar30->fields).LightIntencity = 1.0;
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23((Object *)pCVar30,ExceptionArgument__Enum_obj,method_00);
                fVar7 = 0.0;
                if ((0.0 <= fVar29) && (fVar7 = fVar29, 1.0 < fVar29)) {
                  fVar7 = 1.0;
                }
                (pCVar30->fields).TintColor.r = (fVar20 - fVar10) * fVar7 + fVar10;
                (pCVar30->fields).TintColor.g = (fVar21 - fVar11) * fVar7 + fVar11;
                (pCVar30->fields).TintColor.b = (fVar22 - fVar12) * fVar7 + fVar12;
                (pCVar30->fields).TintColor.a = (fVar23 - fVar13) * fVar7 + fVar13;
                if (fVar29 < 0.0) {
                  fVar7 = 0.0;
                }
                else {
                  fVar7 = fVar29;
                  if (1.0 < fVar29) {
                    fVar7 = 1.0;
                  }
                }
                (pCVar30->fields).LightColor.r = (fVar24 - fVar14) * fVar7 + fVar14;
                (pCVar30->fields).LightColor.g = (fVar25 - fVar15) * fVar7 + fVar15;
                (pCVar30->fields).LightColor.b = (fVar26 - fVar16) * fVar7 + fVar16;
                (pCVar30->fields).LightColor.a = (fVar27 - fVar17) * fVar7 + fVar17;
                if (fVar29 < 0.0) {
                  fVar29 = 0.0;
                }
                else if (1.0 < fVar29) {
                  fVar29 = 1.0;
                }
                (pCVar30->fields).LightIntencity = (fVar28 - fVar18) * fVar29 + fVar18;
                return pCVar30;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  pCVar30 = (CelestialParam *)(*pcVar31)();
  return pCVar30;
}


/* CelestialParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::CelestialParamsList__ctor(CelestialParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__);
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor((SortedParamsList_1_System_Object_ *)this,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__);
  return;
}

