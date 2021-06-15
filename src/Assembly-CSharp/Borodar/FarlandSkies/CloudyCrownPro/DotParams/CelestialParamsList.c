
/* CelestialParam GetParamPerTime(Single) */

CelestialParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
CelestialParamsList_GetParamPerTime(CelestialParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)pDVar1,
                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__
                        );
    if ((int)pIVar2 < 1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Celestial_params_list_is_empty,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.SortedParams;
      this_00 = (ScaleAnimationBase *)
                func_?(
                               TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam
                               );
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                          ((Color *)&stack0xffffffb0,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      fVar5 = pCVar3->b;
      fVar6 = pCVar3->a;
      (this_00->fields).state = (int32_t)pCVar3->r;
      (this_00->fields).originalScale.x = fVar4;
      (this_00->fields).originalScale.y = fVar5;
      (this_00->fields).originalScale.z = fVar6;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                          ((Color *)&stack0xffffffb0,(MethodInfo *)0x0);
      pTVar7 = (Transform *)pCVar3->r;
      fVar4 = pCVar3->g;
      pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pCVar3->b;
      pSVar9 = (ScaleAnimationBase__Class *)pCVar3->a;
      this_00[1].monitor = (MonitorData *)0x3f800000;
      (this_00->fields).target = pTVar7;
      (this_00->fields).testState = (int32_t)fVar4;
      (this_00->fields).OnScaleAnimationStopped = pSVar8;
      this_00[1].klass = pSVar9;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_10);
      if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                ((SortedList_2_System_Single_System_Object_ *)pDVar1,0.0,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam_
                );
    }
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
      pIVar2 = (IList_1_VoxelHit_ *)
                DotParamsList`1[StarsParam]::DotParamsList_1_StarsParam__FindIndexPerTime
                          ((DotParamsList_1_StarsParam_ *)pDVar1,currentTime,
                           MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__FindIndexPerTime_float_
                          );
      if ((int)pIVar2 < 1) {
        pDVar1 = (this->fields)._.SortedParams;
        if (pDVar1 == (DotParamsList_1_CelestialParam_ *)0x0) goto code_?;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pDVar1,
                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__
                            );
      }
      pDVar1 = (this->fields)._.SortedParams;
      if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
        pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                  Object]::SortedList_2_System_Single_System_Object__get_Keys
                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                            );
        if (pIVar11 != (IList_1_System_Single_ *)0x0) {
          puVar12 = (undefined1 *)((int)&pIVar2[-1].monitor + 3);
          fVar13 = (float10)func_?(3,TypeInfo__System__Collections__Generic__IList<float>,
                                            pIVar11,puVar12);
          pDVar1 = (this->fields)._.SortedParams;
          fVar4 = (float)fVar13;
          if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
            pIVar14 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Values
                                ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                );
            if (pIVar14 != (IList_1_System_Object_ *)0x0) {
              iVar15 = func_?(3,
                                       TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                       ,pIVar14,puVar12);
              if (iVar15 != 0) {
                uVar16 = *(undefined4 *)(iVar15 + 0xc);
                uVar17 = *(undefined4 *)(iVar15 + 0x10);
                uVar18 = *(undefined4 *)(iVar15 + 0x14);
                fVar6 = *(float *)(iVar15 + 0x18);
                fVar19 = *(float *)(iVar15 + 0x1c);
                fVar20 = *(float *)(iVar15 + 0x20);
                fVar21 = *(float *)(iVar15 + 0x24);
                fVar22 = *(float *)(iVar15 + 0x28);
                fVar5 = *(float *)(iVar15 + 0x2c);
                pDVar1 = (this->fields)._.SortedParams;
                if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
                  pIVar23 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)pDVar1,
                                       MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Count__
                                      );
                  if ((int)pIVar23 <= (int)pIVar2) {
                    pIVar2 = (IList_1_VoxelHit_ *)0x0;
                  }
                  pDVar1 = (this->fields)._.SortedParams;
                  if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
                    pIVar11 = System.dll::System::Collections::Generic::SortedList`2[System::
                              Single,System::Object]::
                              SortedList_2_System_Single_System_Object__get_Keys
                                        ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Keys__
                                        );
                    if (pIVar11 != (IList_1_System_Single_ *)0x0) {
                      fVar13 = (float10)func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<float>
                                                  ,pIVar11,pIVar2);
                      pDVar1 = (this->fields)._.SortedParams;
                      fVar24 = (float)fVar13;
                      if (pDVar1 != (DotParamsList_1_CelestialParam_ *)0x0) {
                        pIVar14 = System.dll::System::Collections::Generic::SortedList`2[System::
                                  Single,System::Object]::
                                  SortedList_2_System_Single_System_Object__get_Values
                                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__get_Values__
                                            );
                        if (pIVar14 != (IList_1_System_Object_ *)0x0) {
                          iVar15 = func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>
                                                  ,pIVar14,pIVar2);
                          if (iVar15 != 0) {
                            CVar25 = *(Color *)(iVar15 + 0xc);
                            uVar26 = *(undefined4 *)(iVar15 + 0x1c);
                            uVar27 = *(undefined4 *)(iVar15 + 0x20);
                            uVar28 = *(undefined4 *)(iVar15 + 0x24);
                            fVar29 = *(float *)(iVar15 + 0x28);
                            b_00 = *(float *)(iVar15 + 0x2c);
                            if (fVar4 < currentTime) {
                              fVar30 = currentTime - fVar4;
                            }
                            else {
                              fVar30 = (_UNK_? - fVar4) + currentTime;
                            }
                            if (fVar24 <= fVar4) {
                              fVar24 = fVar24 + _UNK_?;
                            }
                            fVar30 = fVar30 / (fVar24 - fVar4);
                            method_00 = 
                            TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__CelestialParam
                            ;
                            pCVar31 = (CelestialParam *)func_?();
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                                                ((Color *)&stack0xffffffa0,(MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            fVar24 = pCVar3->b;
                            fVar32 = pCVar3->a;
                            (pCVar31->fields).TintColor.r = pCVar3->r;
                            ((Vector3 *)&(pCVar31->fields).TintColor.g)->x = fVar4;
                            (pCVar31->fields).TintColor.b = fVar24;
                            (pCVar31->fields).TintColor.a = fVar32;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                                                ((Color *)&stack0xffffffa0,(MethodInfo *)0x0);
                            pTVar7 = (Transform *)pCVar3->r;
                            fVar4 = pCVar3->g;
                            pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                                     pCVar3->b;
                            fVar24 = pCVar3->a;
                            (pCVar31->fields).LightIntencity = 1.0;
                            (pCVar31->fields).LightColor.r = (float)pTVar7;
                            (pCVar31->fields).LightColor.g = fVar4;
                            (pCVar31->fields).LightColor.b = (float)pSVar8;
                            (pCVar31->fields).LightColor.a = fVar24;
                            ScaleAnimationBase::ScaleAnimationBase_Play
                                      ((ScaleAnimationBase *)pCVar31,0.0,(MethodInfo *)method_00);
                            a.g = (float)uVar17;
                            a.r = (float)uVar16;
                            a.b = (float)uVar18;
                            a.a = fVar6;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                                ((Color *)&stack0xffffffa0,a,CVar25,fVar30,
                                                 (MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            fVar6 = pCVar3->b;
                            fVar24 = pCVar3->a;
                            (pCVar31->fields).TintColor.r = pCVar3->r;
                            ((Vector3 *)&(pCVar31->fields).TintColor.g)->x = fVar4;
                            (pCVar31->fields).TintColor.b = fVar6;
                            (pCVar31->fields).TintColor.a = fVar24;
                            CVar25.g = fVar20;
                            CVar25.r = fVar19;
                            CVar25.b = fVar21;
                            CVar25.a = fVar22;
                            b.g = (float)uVar27;
                            b.r = (float)uVar26;
                            b.b = (float)uVar28;
                            b.a = fVar29;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                                ((Color *)&stack0xffffffa0,CVar25,b,fVar30,
                                                 (MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            pSVar8 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                                     pCVar3->b;
                            fVar6 = pCVar3->a;
                            (pCVar31->fields).LightColor.r = (float)pCVar3->r;
                            (pCVar31->fields).LightColor.g = fVar4;
                            (pCVar31->fields).LightColor.b = (float)pSVar8;
                            (pCVar31->fields).LightColor.a = fVar6;
                            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                              func_?();
                            }
                            fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                                               (fVar5,b_00,fVar30,(MethodInfo *)0x0);
                            (pCVar31->fields).LightIntencity = fVar4;
                            return pCVar31;
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
    }
  }
code_?:
  func_?(0);
  pcVar33 = (code *)swi(3);
  pCVar31 = (CelestialParam *)(*pcVar33)();
  return pCVar31;
}


/* CelestialParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParamsList::
     CelestialParamsList__ctor(CelestialParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SortedParamsList`1[StarsParam]::SortedParamsList_1_StarsParam___ctor
            ((SortedParamsList_1_StarsParam_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::CelestialParam>__SortedParamsList__
            );
  return;
}

