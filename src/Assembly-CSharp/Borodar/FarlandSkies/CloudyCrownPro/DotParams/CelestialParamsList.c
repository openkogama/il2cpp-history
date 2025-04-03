
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
    in_stack_1 =
         &
         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
    ;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                   );
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
      iVar7 = DotParamsList`1[System::Object]::DotParamsList_1_System_Object__FindIndexPerTime
                         ((DotParamsList_1_System_Object_ *)pDVar2,currentTime,
                          MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
                         );
      if (iVar7 < 1) {
        pDVar2 = (this->fields)._.SortedParams;
        if (pDVar2 == (DotParamsList_1_CelestialParam_ *)0x0) goto code_?;
        iVar7 = (pDVar2->fields)._._size;
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
      }
      else {
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        if (pSVar3 == (SortedList_2_System_Single_System_Object_ *)0x0) goto code_?;
      }
      pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                Object]::SortedList_2_System_Single_System_Object__get_Keys
                          (pSVar3,
                           MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                          );
      if (pIVar8 != (IList_1_System_Single_ *)0x0) {
        fVar9 = (float10)func_?(0,TypeInfo__System__Collections__Generic__IList<float>,
                                          pIVar8,iVar7 + -1);
        pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
        fVar10 = (float)fVar9;
        if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
            (pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System
                       ::Object]::SortedList_2_System_Single_System_Object__get_Values
                                 (pSVar3,
                                  MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                 ), pIVar11 != (IList_1_System_Object_ *)0x0)) &&
           (iVar12 = func_?(0,
                                     TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                     ,pIVar11,iVar7 + -1), iVar12 != 0)) {
          fVar13 = *(float *)(iVar12 + 0xc);
          fVar14 = *(float *)(iVar12 + 0x10);
          fVar15 = *(float *)(iVar12 + 0x14);
          fVar16 = *(float *)(iVar12 + 0x18);
          fVar17 = *(float *)(iVar12 + 0x1c);
          fVar18 = *(float *)(iVar12 + 0x20);
          fVar19 = *(float *)(iVar12 + 0x24);
          fVar20 = *(float *)(iVar12 + 0x28);
          fVar21 = *(float *)(iVar12 + 0x2c);
          pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
          if (pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) {
            iVar12 = 0;
            if (iVar7 < (pSVar3->fields)._size) {
              iVar12 = iVar7;
            }
            pIVar8 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Keys
                                (pSVar3,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                                );
            if (pIVar8 != (IList_1_System_Single_ *)0x0) {
              fVar9 = (float10)func_?(0,
                                                TypeInfo__System__Collections__Generic__IList<float>
                                                ,pIVar8,iVar12);
              pSVar3 = (SortedList_2_System_Single_System_Object_ *)(this->fields)._.SortedParams;
              fVar22 = (float)fVar9;
              if (((pSVar3 != (SortedList_2_System_Single_System_Object_ *)0x0) &&
                  (pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::
                             Single,System::Object]::
                             SortedList_2_System_Single_System_Object__get_Values
                                       (pSVar3,
                                        MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                       ), pIVar11 != (IList_1_System_Object_ *)0x0)) &&
                 (iVar7 = func_?(0,
                                           TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                           ,pIVar11,iVar12), iVar7 != 0)) {
                fVar23 = *(float *)(iVar7 + 0xc);
                fVar24 = *(float *)(iVar7 + 0x10);
                fVar25 = *(float *)(iVar7 + 0x14);
                fVar26 = *(float *)(iVar7 + 0x18);
                fVar27 = *(float *)(iVar7 + 0x1c);
                fVar28 = *(float *)(iVar7 + 0x20);
                fVar29 = *(float *)(iVar7 + 0x24);
                fVar30 = *(float *)(iVar7 + 0x28);
                fVar31 = *(float *)(iVar7 + 0x2c);
                if (currentTime <= fVar10) {
                  fVar32 = currentTime + (_UNK_? - fVar10);
                }
                else {
                  fVar32 = currentTime - fVar10;
                }
                if (fVar22 <= fVar10) {
                  fVar22 = fVar22 + _UNK_?;
                }
                fVar32 = fVar32 / (fVar22 - fVar10);
                method_00 = 
                TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam;
                pCVar33 = (CelestialParam *)func_?();
                pOVar4 = _UNK_?;
                pMVar5 = _UNK_?;
                pOVar6 = _UNK_?;
                (pCVar33->fields).TintColor.r = (float)_UNK_?;
                (pCVar33->fields).TintColor.g = (float)pOVar6;
                (pCVar33->fields).TintColor.b = (float)pMVar5;
                (pCVar33->fields).TintColor.a = (float)pOVar4;
                pOVar4 = _UNK_?;
                pMVar5 = _UNK_?;
                pOVar6 = _UNK_?;
                (pCVar33->fields).LightColor.r = (float)_UNK_?;
                (pCVar33->fields).LightColor.g = (float)pOVar6;
                (pCVar33->fields).LightColor.b = (float)pMVar5;
                (pCVar33->fields).LightColor.a = (float)pOVar4;
                (pCVar33->fields).LightIntencity = 1.0;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)pCVar33,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                fVar10 = _UNK_?;
                bVar34 = fVar32 < 0.0;
                if (bVar34) {
                  fVar22 = 0.0;
                }
                else {
                  fVar22 = _UNK_?;
                  if (fVar32 <= _UNK_?) {
                    fVar22 = fVar32;
                  }
                }
                (pCVar33->fields).TintColor.r = (fVar23 - fVar13) * fVar22 + fVar13;
                (pCVar33->fields).TintColor.g = (fVar24 - fVar14) * fVar22 + fVar14;
                (pCVar33->fields).TintColor.b = (fVar25 - fVar15) * fVar22 + fVar15;
                (pCVar33->fields).TintColor.a = (fVar26 - fVar16) * fVar22 + fVar16;
                if (bVar34) {
                  fVar13 = 0.0;
                }
                else {
                  fVar13 = fVar10;
                  if (fVar32 <= fVar10) {
                    fVar13 = fVar32;
                  }
                }
                (pCVar33->fields).LightColor.r = (fVar27 - fVar17) * fVar13 + fVar17;
                (pCVar33->fields).LightColor.g = (fVar28 - fVar18) * fVar13 + fVar18;
                (pCVar33->fields).LightColor.b = (fVar29 - fVar19) * fVar13 + fVar19;
                (pCVar33->fields).LightColor.a = (fVar30 - fVar20) * fVar13 + fVar20;
                if (bVar34) {
                  fVar32 = 0.0;
                }
                else if (fVar10 < fVar32) {
                  fVar32 = fVar10;
                }
                (pCVar33->fields).LightIntencity = (fVar31 - fVar21) * fVar32 + fVar21;
                return pCVar33;
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
  pCVar33 = (CelestialParam *)(*pcVar35)();
  return pCVar33;
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

