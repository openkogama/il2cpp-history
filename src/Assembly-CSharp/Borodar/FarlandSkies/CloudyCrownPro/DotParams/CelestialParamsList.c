
/* CelestialParam GetParamPerTime(Single) */

CelestialParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
CelestialParamsList_GetParamPerTime(CelestialParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                   );
    func_?(&TypeInfo__System__Collections__Generic__IList<float>);
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                   );
    in_stack_1 =
         &
         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
    ;
    func_?();
    func_?(&StringLiteral_Celestial_params_list_is_empty);
    cRam_? = '\x01';
  }
  pDVar2 = (this->fields)._.SortedParams;
  if (pDVar2 != (DotParamsList_1_CelestialParam_ *)0x0) {
    if ((pDVar2->fields)._._size < 1) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Celestial_params_list_is_empty,(MethodInfo *)0x0);
      pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      value = (Object *)
              func_?(
                             TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam
                             );
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
      value[5].monitor = (MonitorData *)0x3f800000;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)in_stack_1);
      if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                (pSVar3,0.0,value,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_
                );
    }
    pDVar2 = (this->fields)._.SortedParams;
    if (pDVar2 != (DotParamsList_1_CelestialParam_ *)0x0) {
      iVar8 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                         ((DotParamsList_1_System_Object_ *)pDVar2,currentTime,
                          MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
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
                           MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
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
                                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                 ), pIVar12 != (IList_1_System_Object_ *)0x0)) &&
           (iVar13 = func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                     ,pIVar12,iVar8 + -1), iVar13 != 0)) {
          fVar14 = *(float *)(iVar13 + 0xc);
          fVar15 = *(float *)(iVar13 + 0x10);
          fVar16 = *(float *)(iVar13 + 0x14);
          fVar17 = *(float *)(iVar13 + 0x18);
          fVar18 = *(float *)(iVar13 + 0x1c);
          fVar19 = *(float *)(iVar13 + 0x20);
          fVar20 = *(float *)(iVar13 + 0x24);
          fVar21 = *(float *)(iVar13 + 0x28);
          fVar22 = *(float *)(iVar13 + 0x2c);
          pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
          if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
            iVar13 = 0;
            if (iVar8 < (pSVar3->fields)._size) {
              iVar13 = iVar8;
            }
            pIVar9 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Keys
                                (pSVar3,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                                );
            if (pIVar9 != (IList_1_System_Single_ *)0x0) {
              fVar10 = (float10)func_?(0,
                                                TypeInfo__System__Collections__Generic__IList<float>
                                                ,pIVar9,iVar13);
              pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
              fVar23 = (float)fVar10;
              if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
                  (pIVar12 = System.dll::System::Collections::Generic::SortedList`2[System::
                             Single,System::Object]::
                             SortedList_2_System_Single_System_Object__get_Values
                                       (pSVar3,
                                        MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                       ), pIVar12 != (IList_1_System_Object_ *)0x0)) &&
                 (iVar13 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                           ,pIVar12,iVar13), iVar13 != 0)) {
                fVar24 = *(float *)(iVar13 + 0xc);
                fVar25 = *(float *)(iVar13 + 0x10);
                fVar26 = *(float *)(iVar13 + 0x14);
                fVar27 = *(float *)(iVar13 + 0x18);
                fVar28 = *(float *)(iVar13 + 0x1c);
                fVar29 = *(float *)(iVar13 + 0x20);
                fVar30 = *(float *)(iVar13 + 0x24);
                fVar31 = *(float *)(iVar13 + 0x28);
                fVar32 = *(float *)(iVar13 + 0x2c);
                if (currentTime <= fVar11) {
                  fVar33 = currentTime + (_UNK_? - fVar11);
                }
                else {
                  fVar33 = currentTime - fVar11;
                }
                if (fVar23 <= fVar11) {
                  fVar23 = fVar23 + _UNK_?;
                }
                fVar33 = fVar33 / (fVar23 - fVar11);
                method_00 = 
                TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam;
                pCVar34 = (CelestialParam *)func_?();
                pOVar4 = _UNK_?;
                pMVar5 = _UNK_?;
                pOVar6 = _UNK_?;
                pMVar7 = _UNK_?;
                (pCVar34->fields).TintColor.r = (float)_UNK_?;
                (pCVar34->fields).TintColor.g = (float)pOVar6;
                (pCVar34->fields).TintColor.b = (float)pMVar5;
                (pCVar34->fields).TintColor.a = (float)pOVar4;
                (pCVar34->fields).LightColor.r = (float)pMVar7;
                (pCVar34->fields).LightColor.g = (float)pOVar6;
                (pCVar34->fields).LightColor.b = (float)pMVar5;
                (pCVar34->fields).LightColor.a = (float)pOVar4;
                (pCVar34->fields).LightIntencity = 1.0;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)pCVar34,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                fVar11 = _UNK_?;
                fVar23 = 0.0;
                if ((0.0 <= fVar33) && (fVar23 = _UNK_?, fVar33 <= _UNK_?)) {
                  fVar23 = fVar33;
                }
                (pCVar34->fields).TintColor.r = (fVar24 - fVar14) * fVar23 + fVar14;
                (pCVar34->fields).TintColor.g = (fVar25 - fVar15) * fVar23 + fVar15;
                (pCVar34->fields).TintColor.b = (fVar26 - fVar16) * fVar23 + fVar16;
                (pCVar34->fields).TintColor.a = (fVar27 - fVar17) * fVar23 + fVar17;
                if (fVar33 < 0.0) {
                  fVar14 = 0.0;
                }
                else {
                  fVar14 = fVar11;
                  if (fVar33 <= fVar11) {
                    fVar14 = fVar33;
                  }
                }
                (pCVar34->fields).LightColor.r = (fVar28 - fVar18) * fVar14 + fVar18;
                (pCVar34->fields).LightColor.g = (fVar29 - fVar19) * fVar14 + fVar19;
                (pCVar34->fields).LightColor.b = (fVar30 - fVar20) * fVar14 + fVar20;
                (pCVar34->fields).LightColor.a = (fVar31 - fVar21) * fVar14 + fVar21;
                if (fVar33 < 0.0) {
                  fVar33 = 0.0;
                }
                else if (fVar11 < fVar33) {
                  fVar33 = fVar11;
                }
                (pCVar34->fields).LightIntencity = (fVar32 - fVar22) * fVar33 + fVar22;
                return pCVar34;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  pCVar34 = (CelestialParam *)(*pcVar35)();
  return pCVar34;
}


/* CelestialParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
     CelestialParamsList__ctor(CelestialParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__
                   );
    cRam_? = '\x01';
  }
  SortedParamsList`1[System::Object]::SortedParamsList_1_System_Object___ctor
            ((SortedParamsList_1_System_Object_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__
            );
  return;
}

