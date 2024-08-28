
/* SkyParam GetParamPerTime(Single) */

SkyParam * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::SkyParamsList_GetParamPerTime(SkyParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_);
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    func_?(&TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>);
    func_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__);
    in_stack_1 = &MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__);
    func_?(&StringLiteral_Sky_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_SkyParam_ *)0x0) {
    if ((pDVar2->fields)._._size < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning((Object *)StringLiteral_Sky_params_list_is_empty,(MethodInfo *)0x0);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
      value[1].monitor = (MonitorData *)0x3f000000;
      value[2].klass = (Object__Class *)0x3f000000;
      value[2].monitor = (MonitorData *)0x3f000000;
      value[3].klass = (Object__Class *)0x3f800000;
      value[3].monitor = (MonitorData *)0x3f000000;
      value[4].klass = (Object__Class *)0x3f000000;
      value[4].monitor = (MonitorData *)0x3f000000;
      value[5].klass = (Object__Class *)0x3f800000;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55(value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__Add(pSVar3,0.0,value,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_);
    }
    pDVar2 = (this->fields)._.SortedParams;
    if (pDVar2 != (DotParamsList_1_SkyParam_ *)0x0) {
      iVar4 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime((DotParamsList_1_System_Object_ *)pDVar2,currentTime,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_);
      if (iVar4 < 1) {
        pDVar2 = (this->fields)._.SortedParams;
        if (pDVar2 == (DotParamsList_1_SkyParam_ *)0x0) goto code_?;
        iVar4 = (pDVar2->fields)._._size;
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      }
      else {
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      }
      pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__);
      if (pIVar5 != (IList_1_System_Single_ *)0x0) {
        fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar4 + -1);
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        fVar7 = (float)fVar6;
        if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) && (pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__), pIVar8 != (IList_1_System_Object_ *)0x0)) && (iVar9 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>,pIVar8,iVar4 + -1), iVar9 != 0)) {
          fVar10 = *(float *)(iVar9 + 0xc);
          fVar11 = *(float *)(iVar9 + 0x10);
          fVar12 = *(float *)(iVar9 + 0x14);
          fVar13 = *(float *)(iVar9 + 0x18);
          fVar14 = *(float *)(iVar9 + 0x1c);
          fVar15 = *(float *)(iVar9 + 0x20);
          fVar16 = *(float *)(iVar9 + 0x24);
          fVar17 = *(float *)(iVar9 + 0x28);
          pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
          if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
            iVar9 = 0;
            if (iVar4 < (pSVar3->fields)._size) {
              iVar9 = iVar4;
            }
            pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__);
            if (pIVar5 != (IList_1_System_Single_ *)0x0) {
              fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar9);
              pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
              fVar18 = (float)fVar6;
              if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) && (pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__), pIVar8 != (IList_1_System_Object_ *)0x0)) && (iVar4 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>,pIVar8,iVar9), iVar4 != 0)) {
                fVar19 = *(float *)(iVar4 + 0xc);
                fVar20 = *(float *)(iVar4 + 0x10);
                fVar21 = *(float *)(iVar4 + 0x14);
                fVar22 = *(float *)(iVar4 + 0x18);
                fVar23 = *(float *)(iVar4 + 0x1c);
                fVar24 = *(float *)(iVar4 + 0x20);
                fVar25 = *(float *)(iVar4 + 0x24);
                fVar26 = *(float *)(iVar4 + 0x28);
                if (currentTime <= fVar7) {
                  fVar27 = currentTime + (100.0 - fVar7);
                }
                else {
                  fVar27 = currentTime - fVar7;
                }
                if (fVar18 <= fVar7) {
                  fVar18 = fVar18 + 100.0;
                }
                fVar27 = fVar27 / (fVar18 - fVar7);
                method_00 = TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam;
                pSVar28 = (SkyParam *)func_?();
                (pSVar28->fields).TopColor.r = 0.5;
                (pSVar28->fields).TopColor.g = 0.5;
                (pSVar28->fields).TopColor.b = 0.5;
                (pSVar28->fields).TopColor.a = 1.0;
                (pSVar28->fields).BottomColor.r = 0.5;
                (pSVar28->fields).BottomColor.g = 0.5;
                (pSVar28->fields).BottomColor.b = 0.5;
                (pSVar28->fields).BottomColor.a = 1.0;
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55((Object *)pSVar28,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                if (fVar27 < 0.0) {
                  fVar7 = 0.0;
                }
                else {
                  fVar7 = fVar27;
                  if (1.0 < fVar27) {
                    fVar7 = 1.0;
                  }
                }
                (pSVar28->fields).TopColor.r = (fVar19 - fVar10) * fVar7 + fVar10;
                (pSVar28->fields).TopColor.g = (fVar20 - fVar11) * fVar7 + fVar11;
                (pSVar28->fields).TopColor.b = (fVar21 - fVar12) * fVar7 + fVar12;
                (pSVar28->fields).TopColor.a = (fVar22 - fVar13) * fVar7 + fVar13;
                if (fVar27 < 0.0) {
                  fVar27 = 0.0;
                }
                else if (1.0 < fVar27) {
                  fVar27 = 1.0;
                }
                (pSVar28->fields).BottomColor.r = (fVar23 - fVar14) * fVar27 + fVar14;
                (pSVar28->fields).BottomColor.g = (fVar24 - fVar15) * fVar27 + fVar15;
                (pSVar28->fields).BottomColor.b = (fVar25 - fVar16) * fVar27 + fVar16;
                (pSVar28->fields).BottomColor.a = (fVar26 - fVar17) * fVar27 + fVar17;
                return pSVar28;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  pSVar28 = (SkyParam *)(*pcVar29)();
  return pSVar28;
}


/* SkyParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::SkyParamsList__ctor(SkyParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__);
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor((SortedParamsList_1_System_Object_ *)this,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__);
  return;
}

