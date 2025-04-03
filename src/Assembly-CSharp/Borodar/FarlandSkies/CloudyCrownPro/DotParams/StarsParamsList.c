
/* StarsParam GetParamPerTime(Single) */

StarsParam * Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::StarsParamsList_GetParamPerTime(StarsParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_);
    func_?(&TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>);
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__);
    in_stack_1 = &MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__;
    func_?();
    func_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
    func_?(&StringLiteral_Stars_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_StarsParam_ *)0x0) {
    if ((pDVar2->fields)._._size < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning((Object *)StringLiteral_Stars_params_list_is_empty,(MethodInfo *)0x0);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam);
      value[1].monitor = (MonitorData *)0x3f000000;
      value[2].klass = (Object__Class *)0x3f000000;
      value[2].monitor = (MonitorData *)0x3f000000;
      value[3].klass = (Object__Class *)0x3f800000;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57(value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__Add(pSVar3,0.0,value,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_);
    }
    pDVar2 = (this->fields)._.SortedParams;
    if (pDVar2 != (DotParamsList_1_StarsParam_ *)0x0) {
      iVar4 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime((DotParamsList_1_System_Object_ *)pDVar2,currentTime,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_);
      if (iVar4 < 1) {
        pDVar2 = (this->fields)._.SortedParams;
        if (pDVar2 == (DotParamsList_1_StarsParam_ *)0x0) goto code_?;
        iVar4 = (pDVar2->fields)._._size;
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      }
      else {
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      }
      pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__);
      if (pIVar5 != (IList_1_System_Single_ *)0x0) {
        fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar4 + -1);
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        fVar7 = (float)fVar6;
        if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
          pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__);
          if (pIVar8 != (IList_1_System_Object_ *)0x0) {
            iVar9 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>,pIVar8,iVar4 + -1);
            if (iVar9 != 0) {
              fVar10 = *(float *)(iVar9 + 0xc);
              fVar11 = *(float *)(iVar9 + 0x10);
              fVar12 = *(float *)(iVar9 + 0x14);
              fVar13 = *(float *)(iVar9 + 0x18);
              pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
              if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
                iVar9 = 0;
                if (iVar4 < (pSVar3->fields)._size) {
                  iVar9 = iVar4;
                }
                pIVar5 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__);
                if (pIVar5 != (IList_1_System_Single_ *)0x0) {
                  fVar6 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,pIVar5,iVar9);
                  pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
                  fVar14 = (float)fVar6;
                  if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
                    pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::SortedList_2_System_Single_System_Object__get_Values(pSVar3,MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__);
                    if (pIVar8 != (IList_1_System_Object_ *)0x0) {
                      iVar4 = func_?(0,TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>,pIVar8,iVar9);
                      if (iVar4 != 0) {
                        fVar15 = *(float *)(iVar4 + 0xc);
                        fVar16 = *(float *)(iVar4 + 0x10);
                        fVar17 = *(float *)(iVar4 + 0x14);
                        fVar18 = *(float *)(iVar4 + 0x18);
                        if (currentTime <= fVar7) {
                          fVar19 = currentTime + (100.0 - fVar7);
                        }
                        else {
                          fVar19 = currentTime - fVar7;
                        }
                        if (fVar14 <= fVar7) {
                          fVar14 = fVar14 + 100.0;
                        }
                        method_00 = TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam;
                        pSVar20 = (StarsParam *)func_?();
                        (pSVar20->fields).TintColor.r = 0.5;
                        (pSVar20->fields).TintColor.g = 0.5;
                        (pSVar20->fields).TintColor.b = 0.5;
                        (pSVar20->fields).TintColor.a = 1.0;
                        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)pSVar20,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                        fVar19 = fVar19 / (fVar14 - fVar7);
                        if (fVar19 < 0.0) {
                          fVar19 = 0.0;
                        }
                        else if (1.0 < fVar19) {
                          fVar19 = 1.0;
                        }
                        (pSVar20->fields).TintColor.r = (fVar15 - fVar10) * fVar19 + fVar10;
                        (pSVar20->fields).TintColor.g = (fVar16 - fVar11) * fVar19 + fVar11;
                        (pSVar20->fields).TintColor.b = (fVar17 - fVar12) * fVar19 + fVar12;
                        (pSVar20->fields).TintColor.a = (fVar18 - fVar13) * fVar19 + fVar13;
                        return pSVar20;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  pSVar20 = (StarsParam *)(*pcVar21)();
  return pSVar20;
}


/* StarsParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::StarsParamsList__ctor(StarsParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__);
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor((SortedParamsList_1_System_Object_ *)this,MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__);
  return;
}

