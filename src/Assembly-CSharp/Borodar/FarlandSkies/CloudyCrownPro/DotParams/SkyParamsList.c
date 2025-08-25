
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
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                   );
    in_stack_1 =
         &
         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
    ;
    func_?();
    func_?(&StringLiteral_Sky_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_SkyParam_ *)0x0) {
    if ((pDVar2->fields)._._size < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Sky_params_list_is_empty,(MethodInfo *)0x0);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam);
      pOVar4 = _UNK_?;
      pMVar5 = _UNK_?;
      pOVar6 = _UNK_?;
      pMVar7 = _UNK_?;
      value[1].monitor = _UNK_?;
      value[2].klass = pOVar6;
      value[2].monitor = pMVar5;
      value[3].klass = pOVar4;
      value[3].monitor = pMVar7;
      value[4].klass = pOVar6;
      value[4].monitor = pMVar5;
      value[5].klass = pOVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
      iVar8 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                         ((DotParamsList_1_System_Object_ *)pDVar2,currentTime,
                          MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                         );
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      if (iVar8 < 1) {
        if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
        iVar8 = (pSVar3->fields)._size;
      }
      else if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      pIVar9 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                Object]::SortedList_2_System_Single_System_Object__get_Keys
                          (pSVar3,
                           MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                          );
      if (pIVar9 != (IList_1_System_Single_ *)0x0) {
        fVar10 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,
                                          pIVar9,iVar8 + -1);
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        fVar11 = (float)fVar10;
        if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
            (pIVar12 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System
                       ::Object]::SortedList_2_System_Single_System_Object__get_Values
                                 (pSVar3,
                                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                 ), pIVar12 != (IList_1_System_Object_ *)0x0)) &&
           (iVar13 = func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                     ,pIVar12,iVar8 + -1), iVar13 != 0)) {
          fVar14 = *(float *)(iVar13 + 0xc);
          fVar15 = *(float *)(iVar13 + 0x10);
          fVar16 = *(float *)(iVar13 + 0x14);
          fVar17 = *(float *)(iVar13 + 0x18);
          fVar18 = *(float *)(iVar13 + 0x1c);
          fVar19 = *(float *)(iVar13 + 0x20);
          fVar20 = *(float *)(iVar13 + 0x24);
          fVar21 = *(float *)(iVar13 + 0x28);
          pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
          if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
            iVar13 = 0;
            if (iVar8 < (pSVar3->fields)._size) {
              iVar13 = iVar8;
            }
            pIVar9 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Keys
                                (pSVar3,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                                );
            if (pIVar9 != (IList_1_System_Single_ *)0x0) {
              fVar10 = (float10)func_?(0,
                                                TypeInfo__System__Collections__Generic__IList<float>
                                                ,pIVar9,iVar13);
              pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
              fVar22 = (float)fVar10;
              if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
                  (pIVar12 = System.dll::System::Collections::Generic::SortedList`2[System::
                             Single,System::Object]::
                             SortedList_2_System_Single_System_Object__get_Values
                                       (pSVar3,
                                        MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                       ), pIVar12 != (IList_1_System_Object_ *)0x0)) &&
                 (iVar13 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                           ,pIVar12,iVar13), iVar13 != 0)) {
                fVar23 = *(float *)(iVar13 + 0xc);
                fVar24 = *(float *)(iVar13 + 0x10);
                fVar25 = *(float *)(iVar13 + 0x14);
                fVar26 = *(float *)(iVar13 + 0x18);
                fVar27 = *(float *)(iVar13 + 0x1c);
                fVar28 = *(float *)(iVar13 + 0x20);
                fVar29 = *(float *)(iVar13 + 0x24);
                fVar30 = *(float *)(iVar13 + 0x28);
                if (currentTime <= fVar11) {
                  fVar31 = currentTime + (_UNK_? - fVar11);
                }
                else {
                  fVar31 = currentTime - fVar11;
                }
                if (fVar22 <= fVar11) {
                  fVar22 = fVar22 + _UNK_?;
                }
                fVar31 = fVar31 / (fVar22 - fVar11);
                method_00 = TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam;
                pSVar32 = (SkyParam *)func_?();
                pOVar4 = _UNK_?;
                pMVar5 = _UNK_?;
                pOVar6 = _UNK_?;
                pMVar7 = _UNK_?;
                (pSVar32->fields).TopColor.r = (float)_UNK_?;
                (pSVar32->fields).TopColor.g = (float)pOVar6;
                (pSVar32->fields).TopColor.b = (float)pMVar5;
                (pSVar32->fields).TopColor.a = (float)pOVar4;
                (pSVar32->fields).BottomColor.r = (float)pMVar7;
                (pSVar32->fields).BottomColor.g = (float)pOVar6;
                (pSVar32->fields).BottomColor.b = (float)pMVar5;
                (pSVar32->fields).BottomColor.a = (float)pOVar4;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)pSVar32,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                fVar11 = _UNK_?;
                fVar22 = 0.0;
                if ((0.0 <= fVar31) && (fVar22 = _UNK_?, fVar31 <= _UNK_?)) {
                  fVar22 = fVar31;
                }
                (pSVar32->fields).TopColor.r = (fVar23 - fVar14) * fVar22 + fVar14;
                (pSVar32->fields).TopColor.g = (fVar24 - fVar15) * fVar22 + fVar15;
                (pSVar32->fields).TopColor.b = (fVar25 - fVar16) * fVar22 + fVar16;
                (pSVar32->fields).TopColor.a = (fVar26 - fVar17) * fVar22 + fVar17;
                if (fVar31 < 0.0) {
                  fVar31 = 0.0;
                }
                else if (fVar11 < fVar31) {
                  fVar31 = fVar11;
                }
                (pSVar32->fields).BottomColor.r = (fVar27 - fVar18) * fVar31 + fVar18;
                (pSVar32->fields).BottomColor.g = (fVar28 - fVar19) * fVar31 + fVar19;
                (pSVar32->fields).BottomColor.b = (fVar29 - fVar20) * fVar31 + fVar20;
                (pSVar32->fields).BottomColor.a = (fVar30 - fVar21) * fVar31 + fVar21;
                return pSVar32;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  pSVar32 = (SkyParam *)(*pcVar33)();
  return pSVar32;
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

