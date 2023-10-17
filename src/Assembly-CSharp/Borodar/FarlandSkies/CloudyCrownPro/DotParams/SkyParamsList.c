
/* SkyParam GetParamPerTime(Single) */

SkyParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
SkyParamsList_GetParamPerTime(SkyParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                   );
    func_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
    in_stack_1 =
         &
         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                   );
    func_?(&StringLiteral_Sky_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 == (DotParamsList_1_SkyParam_ *)0x0) goto code_?;
  if ((pDVar2->fields)._._size < 1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
              ((Object *)StringLiteral_Sky_params_list_is_empty,(MethodInfo *)0x0);
    pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
    value = (Object *)
            func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
    pOVar4 = _UNK_?;
    pMVar5 = _UNK_?;
    pOVar6 = _UNK_?;
    if (value == (Object *)0x0) goto code_?;
    value[1].monitor = _UNK_?;
    value[2].klass = pOVar6;
    value[2].monitor = pMVar5;
    value[3].klass = pOVar4;
    pOVar4 = _UNK_?;
    pMVar5 = _UNK_?;
    pOVar6 = _UNK_?;
    value[3].monitor = _UNK_?;
    value[4].klass = pOVar6;
    value[4].monitor = pMVar5;
    value[5].klass = pOVar4;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
    if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object__Add
              (pSVar3,0.0,value,
               MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
              );
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_SkyParam_ *)0x0) {
    iVar7 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                       ((DotParamsList_1_System_Object_ *)pDVar2,currentTime,
                        MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                       );
    pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
    if (iVar7 < 1) {
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      iVar7 = (pSVar3->fields)._size;
    }
    else if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
    pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]
              ::SortedList_2_System_Single_System_Object__get_Keys
                        (pSVar3,
                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                        );
    if (pIVar8 != (IList_1_System_Single_ *)0x0) {
      method_00 = (MethodInfo *)&UNK_?;
      fVar9 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,
                                        pIVar8,iVar7 + -1);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      fVar10 = (float)fVar9;
      if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
          (pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                     Object]::SortedList_2_System_Single_System_Object__get_Values
                               (pSVar3,
                                MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                               ), pIVar11 != (IList_1_System_Object_ *)0x0)) &&
         (iVar12 = func_?(0,
                                   TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                   ,pIVar11,iVar7 + -1), iVar12 != 0)) {
        fVar13 = *(float *)(iVar12 + 0xc);
        fVar14 = *(float *)(iVar12 + 0x10);
        fVar15 = *(float *)(iVar12 + 0x14);
        fVar16 = *(float *)(iVar12 + 0x18);
        fVar17 = *(float *)(iVar12 + 0x1c);
        fVar18 = *(float *)(iVar12 + 0x20);
        fVar19 = *(float *)(iVar12 + 0x24);
        fVar20 = *(float *)(iVar12 + 0x28);
        pDVar2 = (this->fields)._.SortedParams;
        if (pDVar2 != (DotParamsList_1_SkyParam_ *)0x0) {
          iVar12 = 0;
          if (iVar7 < (pDVar2->fields)._._size) {
            iVar12 = iVar7;
          }
          pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                    Object]::SortedList_2_System_Single_System_Object__get_Keys
                              ((SortedList_2_System_Single_System_Object_ *)
                               (this->fields)._.SortedParams,
                               MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                              );
          if (pIVar8 != (IList_1_System_Single_ *)0x0) {
            fVar9 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>
                                              ,pIVar8,iVar12);
            pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
            fVar21 = (float)fVar9;
            if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
                (pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::
                           Single,System::Object]::
                           SortedList_2_System_Single_System_Object__get_Values
                                     (pSVar3,
                                      MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                     ), pIVar11 != (IList_1_System_Object_ *)0x0)) &&
               (iVar12 = func_?(0,
                                         TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                         ,pIVar11,iVar12), iVar12 != 0)) {
              fVar22 = *(float *)(iVar12 + 0xc);
              fVar23 = *(float *)(iVar12 + 0x10);
              fVar24 = *(float *)(iVar12 + 0x14);
              fVar25 = *(float *)(iVar12 + 0x18);
              fVar26 = *(float *)(iVar12 + 0x1c);
              fVar27 = *(float *)(iVar12 + 0x20);
              fVar28 = *(float *)(iVar12 + 0x24);
              fVar29 = *(float *)(iVar12 + 0x28);
              if (currentTime <= fVar10) {
                fVar30 = currentTime + (_UNK_? - fVar10);
              }
              else {
                fVar30 = currentTime - fVar10;
              }
              if (fVar21 <= fVar10) {
                fVar21 = fVar21 + _UNK_?;
              }
              fVar30 = fVar30 / (fVar21 - fVar10);
              pSVar31 = (SkyParam *)
                        func_?(
                                       TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam
                                       );
              pOVar4 = _UNK_?;
              pMVar5 = _UNK_?;
              pOVar6 = _UNK_?;
              if (pSVar31 != (SkyParam *)0x0) {
                (pSVar31->fields).TopColor.r = (float)_UNK_?;
                (pSVar31->fields).TopColor.g = (float)pOVar6;
                (pSVar31->fields).TopColor.b = (float)pMVar5;
                (pSVar31->fields).TopColor.a = (float)pOVar4;
                pOVar4 = _UNK_?;
                pMVar5 = _UNK_?;
                pOVar6 = _UNK_?;
                (pSVar31->fields).BottomColor.r = (float)_UNK_?;
                (pSVar31->fields).BottomColor.g = (float)pOVar6;
                (pSVar31->fields).BottomColor.b = (float)pMVar5;
                (pSVar31->fields).BottomColor.a = (float)pOVar4;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)pSVar31,ExceptionArgument__Enum_obj,method_00);
                fVar10 = _UNK_?;
                fVar21 = 0.0;
                if ((0.0 <= fVar30) && (fVar21 = _UNK_?, fVar30 <= _UNK_?)) {
                  fVar21 = fVar30;
                }
                (pSVar31->fields).TopColor.r = (fVar22 - fVar13) * fVar21 + fVar13;
                (pSVar31->fields).TopColor.g = (fVar23 - fVar14) * fVar21 + fVar14;
                (pSVar31->fields).TopColor.b = (fVar24 - fVar15) * fVar21 + fVar15;
                (pSVar31->fields).TopColor.a = (fVar25 - fVar16) * fVar21 + fVar16;
                if (fVar30 < 0.0) {
                  fVar30 = 0.0;
                }
                else if (fVar10 < fVar30) {
                  fVar30 = fVar10;
                }
                (pSVar31->fields).BottomColor.r = (fVar26 - fVar17) * fVar30 + fVar17;
                (pSVar31->fields).BottomColor.g = (fVar27 - fVar18) * fVar30 + fVar18;
                (pSVar31->fields).BottomColor.b = (fVar28 - fVar19) * fVar30 + fVar19;
                (pSVar31->fields).BottomColor.a = (fVar29 - fVar20) * fVar30 + fVar20;
                return pSVar31;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  pSVar31 = (SkyParam *)(*pcVar32)();
  return pSVar31;
}


/* SkyParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
     SkyParamsList__ctor(SkyParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__
                   );
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
            ((SortedParamsList_1_System_Object_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__
            );
  return;
}

