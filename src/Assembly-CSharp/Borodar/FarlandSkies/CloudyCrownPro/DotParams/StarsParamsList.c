
/* StarsParam GetParamPerTime(Single) */

StarsParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
StarsParamsList_GetParamPerTime(StarsParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                   );
    in_stack_1 = &TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam;
    func_?();
    func_?(&StringLiteral_Stars_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_StarsParam_ *)0x0) {
    if ((pDVar2->fields)._._size < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Stars_params_list_is_empty,(MethodInfo *)0x0);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam
                             );
      pOVar4 = _UNK_?;
      pMVar5 = _UNK_?;
      pOVar6 = _UNK_?;
      value[1].monitor = _UNK_?;
      value[2].klass = pOVar6;
      value[2].monitor = pMVar5;
      value[3].klass = pOVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                (pSVar3,0.0,value,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam_
                );
    }
    pDVar2 = (this->fields)._.SortedParams;
    if (pDVar2 != (DotParamsList_1_StarsParam_ *)0x0) {
      iVar7 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                         ((DotParamsList_1_System_Object_ *)pDVar2,currentTime,
                          MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__FindIndexPerTime_float_
                         );
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      if (iVar7 < 1) {
        if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
        iVar7 = (pSVar3->fields)._size;
      }
      else if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                Object]::SortedList_2_System_Single_System_Object__get_Keys
                          (pSVar3,
                           MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                          );
      if (pIVar8 != (IList_1_System_Single_ *)0x0) {
        fVar9 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,
                                          pIVar8,iVar7 + -1);
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        fVar10 = (float)fVar9;
        if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
          pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                    Object]::SortedList_2_System_Single_System_Object__get_Values
                              (pSVar3,
                               MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                              );
          if (pIVar11 != (IList_1_System_Object_ *)0x0) {
            iVar12 = func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                     ,pIVar11,iVar7 + -1);
            if (iVar12 != 0) {
              fVar13 = *(float *)(iVar12 + 0xc);
              fVar14 = *(float *)(iVar12 + 0x10);
              fVar15 = *(float *)(iVar12 + 0x14);
              fVar16 = *(float *)(iVar12 + 0x18);
              pDVar2 = (this->fields)._.SortedParams;
              if (pDVar2 != (DotParamsList_1_StarsParam_ *)0x0) {
                iVar12 = 0;
                if (iVar7 < (pDVar2->fields)._._size) {
                  iVar12 = iVar7;
                }
                pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::
                          Single,System::Object]::SortedList_2_System_Single_System_Object__get_Keys
                                    ((SortedList_2_System_Single_System_Object_ *)
                                     (this->fields)._.SortedParams,
                                     MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Keys__
                                    );
                if (pIVar8 != (IList_1_System_Single_ *)0x0) {
                  fVar9 = (float10)func_?(0,
                                                  TypeInfo__System__Collections__Generic__IList<float>
                                                  ,pIVar8,iVar12);
                  pSVar3 = (SortedList_2_System_Single_System_Object_ *)
                           (this->fields)._.SortedParams;
                  fVar17 = (float)fVar9;
                  if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
                    pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::
                              Single,System::Object]::
                              SortedList_2_System_Single_System_Object__get_Values
                                        (pSVar3,
                                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__get_Values__
                                        );
                    if (pIVar11 != (IList_1_System_Object_ *)0x0) {
                      iVar12 = func_?(0,
                                               TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>
                                               ,pIVar11,iVar12);
                      if (iVar12 != 0) {
                        fVar18 = *(float *)(iVar12 + 0xc);
                        fVar19 = *(float *)(iVar12 + 0x10);
                        fVar20 = *(float *)(iVar12 + 0x14);
                        fVar21 = *(float *)(iVar12 + 0x18);
                        if (currentTime <= fVar10) {
                          fVar22 = currentTime + (_UNK_? - fVar10);
                        }
                        else {
                          fVar22 = currentTime - fVar10;
                        }
                        if (fVar17 <= fVar10) {
                          fVar17 = fVar17 + _UNK_?;
                        }
                        method_00 = 
                        TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__StarsParam;
                        pSVar23 = (StarsParam *)func_?();
                        pOVar4 = _UNK_?;
                        pMVar5 = _UNK_?;
                        pOVar6 = _UNK_?;
                        (pSVar23->fields).TintColor.r = (float)_UNK_?;
                        (pSVar23->fields).TintColor.g = (float)pOVar6;
                        (pSVar23->fields).TintColor.b = (float)pMVar5;
                        (pSVar23->fields).TintColor.a = (float)pOVar4;
                        mscorlib.dll::System::ThrowHelper::
                        ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                  ((Object *)pSVar23,ExceptionArgument__Enum_obj,
                                   (MethodInfo *)method_00);
                        fVar22 = fVar22 / (fVar17 - fVar10);
                        if (fVar22 < 0.0) {
                          fVar22 = 0.0;
                        }
                        else if (_UNK_? < fVar22) {
                          fVar22 = _UNK_?;
                        }
                        (pSVar23->fields).TintColor.r = (fVar18 - fVar13) * fVar22 + fVar13;
                        (pSVar23->fields).TintColor.g = (fVar19 - fVar14) * fVar22 + fVar14;
                        (pSVar23->fields).TintColor.b = (fVar20 - fVar15) * fVar22 + fVar15;
                        (pSVar23->fields).TintColor.a = (fVar21 - fVar16) * fVar22 + fVar16;
                        return pSVar23;
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
  pcVar24 = (code *)swi(3);
  pSVar23 = (StarsParam *)(*pcVar24)();
  return pSVar23;
}


/* StarsParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParamsList::
     StarsParamsList__ctor(StarsParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__
                   );
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
            ((SortedParamsList_1_System_Object_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::StarsParam>__SortedParamsList__
            );
  return;
}

