
/* SkyParam GetParamPerTime(Single) */

SkyParam *
Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
SkyParamsList_GetParamPerTime(SkyParamsList *this,float currentTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.SortedParams;
  if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)pDVar1,
                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                        );
    if ((int)pIVar2 < 1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Sky_params_list_is_empty,(MethodInfo *)0x0);
      pDVar1 = (this->fields)._.SortedParams;
      this_00 = (ScaleAnimationBase *)
                func_?(TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam
                               );
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                          ((Color *)&stack0xffffffb8,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      fVar5 = pCVar3->b;
      fVar6 = pCVar3->a;
      (this_00->fields).state = (int32_t)pCVar3->r;
      (this_00->fields).originalScale.x = fVar4;
      (this_00->fields).originalScale.y = fVar5;
      (this_00->fields).originalScale.z = fVar6;
      pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                          ((Color *)&stack0xffffffb8,(MethodInfo *)0x0);
      fVar4 = pCVar3->g;
      pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)pCVar3->b;
      pSVar8 = (ScaleAnimationBase__Class *)pCVar3->a;
      (this_00->fields).target = (Transform *)pCVar3->r;
      (this_00->fields).testState = (int32_t)fVar4;
      (this_00->fields).OnScaleAnimationStopped = pSVar7;
      this_00[1].klass = pSVar8;
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,in_stack_9);
      if (pDVar1 == (DotParamsList_1_SkyParam_ *)0x0) goto code_?;
      System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
      SortedList_2_System_Single_System_Object__Add
                ((SortedList_2_System_Single_System_Object_ *)pDVar1,0.0,(Object *)this_00,
                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__Add_float__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam_
                );
    }
    pDVar1 = (this->fields)._.SortedParams;
    if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
      pIVar2 = (IList_1_VoxelHit_ *)
                DotParamsList`1[StarsParam]::DotParamsList_1_StarsParam__FindIndexPerTime
                          ((DotParamsList_1_StarsParam_ *)pDVar1,currentTime,
                           MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__DotParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__FindIndexPerTime_float_
                          );
      if ((int)pIVar2 < 1) {
        pDVar1 = (this->fields)._.SortedParams;
        if (pDVar1 == (DotParamsList_1_SkyParam_ *)0x0) goto code_?;
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pDVar1,
                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                            );
      }
      pDVar1 = (this->fields)._.SortedParams;
      if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
        pIVar10 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                  Object]::SortedList_2_System_Single_System_Object__get_Keys
                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                            );
        if (pIVar10 != (IList_1_System_Single_ *)0x0) {
          puVar11 = (undefined1 *)((int)&pIVar2[-1].monitor + 3);
          fVar12 = (float10)func_?(3,TypeInfo__System__Collections__Generic__IList<float>,
                                            pIVar10,puVar11);
          pDVar1 = (this->fields)._.SortedParams;
          fVar4 = (float)fVar12;
          if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
            pIVar13 = System.dll::System::Collections::Generic::SortedList`2[System::Single,System::
                      Object]::SortedList_2_System_Single_System_Object__get_Values
                                ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                 MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                );
            if (pIVar13 != (IList_1_System_Object_ *)0x0) {
              iVar14 = func_?(3,
                                       TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                       ,pIVar13,puVar11);
              if (iVar14 != 0) {
                uVar15 = *(undefined4 *)(iVar14 + 0xc);
                uVar16 = *(undefined4 *)(iVar14 + 0x10);
                uVar17 = *(undefined4 *)(iVar14 + 0x14);
                fVar5 = *(float *)(iVar14 + 0x18);
                fVar6 = *(float *)(iVar14 + 0x1c);
                fVar18 = *(float *)(iVar14 + 0x20);
                fVar19 = *(float *)(iVar14 + 0x24);
                fVar20 = *(float *)(iVar14 + 0x28);
                pDVar1 = (this->fields)._.SortedParams;
                if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
                  pIVar21 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                            Collection_1_VoxelHit__get_Items
                                      ((Collection_1_VoxelHit_ *)pDVar1,
                                       MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Count__
                                      );
                  if ((int)pIVar21 <= (int)pIVar2) {
                    pIVar2 = (IList_1_VoxelHit_ *)0x0;
                  }
                  pDVar1 = (this->fields)._.SortedParams;
                  if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
                    pIVar10 = System.dll::System::Collections::Generic::SortedList`2[System::
                              Single,System::Object]::
                              SortedList_2_System_Single_System_Object__get_Keys
                                        ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                         MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Keys__
                                        );
                    if (pIVar10 != (IList_1_System_Single_ *)0x0) {
                      fVar12 = (float10)func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<float>
                                                  ,pIVar10,pIVar2);
                      pDVar1 = (this->fields)._.SortedParams;
                      fVar22 = (float)fVar12;
                      if (pDVar1 != (DotParamsList_1_SkyParam_ *)0x0) {
                        pIVar13 = System.dll::System::Collections::Generic::SortedList`2[System::
                                  Single,System::Object]::
                                  SortedList_2_System_Single_System_Object__get_Values
                                            ((SortedList_2_System_Single_System_Object_ *)pDVar1,
                                             MethodInfo__System__Collections__Generic__SortedList<float,_Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__get_Values__
                                            );
                        if (pIVar13 != (IList_1_System_Object_ *)0x0) {
                          iVar14 = func_?(3,
                                                  TypeInfo__System__Collections__Generic__IList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>
                                                  ,pIVar13,pIVar2);
                          if (iVar14 != 0) {
                            CVar23 = *(Color *)(iVar14 + 0xc);
                            uVar24 = *(undefined4 *)(iVar14 + 0x1c);
                            uVar25 = *(undefined4 *)(iVar14 + 0x20);
                            uVar26 = *(undefined4 *)(iVar14 + 0x24);
                            fVar27 = *(float *)(iVar14 + 0x28);
                            if (fVar4 < currentTime) {
                              fVar28 = currentTime - fVar4;
                            }
                            else {
                              fVar28 = (_UNK_? - fVar4) + currentTime;
                            }
                            if (fVar22 <= fVar4) {
                              fVar22 = fVar22 + _UNK_?;
                            }
                            fVar28 = fVar28 / (fVar22 - fVar4);
                            method_00 = 
                            TypeInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SkyParam;
                            pSVar29 = (SkyParam *)func_?();
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                                                ((Color *)&stack0xffffffa8,(MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            fVar22 = pCVar3->b;
                            fVar30 = pCVar3->a;
                            (pSVar29->fields).TopColor.r = pCVar3->r;
                            ((Vector3 *)&(pSVar29->fields).TopColor.g)->x = fVar4;
                            (pSVar29->fields).TopColor.b = fVar22;
                            (pSVar29->fields).TopColor.a = fVar30;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_grey
                                                ((Color *)&stack0xffffffa8,(MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                                     pCVar3->b;
                            fVar22 = pCVar3->a;
                            (pSVar29->fields).BottomColor.r = (float)pCVar3->r;
                            (pSVar29->fields).BottomColor.g = fVar4;
                            (pSVar29->fields).BottomColor.b = (float)pSVar7;
                            (pSVar29->fields).BottomColor.a = fVar22;
                            ScaleAnimationBase::ScaleAnimationBase_Play
                                      ((ScaleAnimationBase *)pSVar29,0.0,(MethodInfo *)method_00);
                            a.g = (float)uVar16;
                            a.r = (float)uVar15;
                            a.b = (float)uVar17;
                            a.a = fVar5;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                                ((Color *)&stack0xffffffa8,a,CVar23,fVar28,
                                                 (MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            fVar5 = pCVar3->b;
                            fVar22 = pCVar3->a;
                            (pSVar29->fields).TopColor.r = pCVar3->r;
                            ((Vector3 *)&(pSVar29->fields).TopColor.g)->x = fVar4;
                            (pSVar29->fields).TopColor.b = fVar5;
                            (pSVar29->fields).TopColor.a = fVar22;
                            CVar23.g = fVar18;
                            CVar23.r = fVar6;
                            CVar23.b = fVar19;
                            CVar23.a = fVar20;
                            b.g = (float)uVar25;
                            b.r = (float)uVar24;
                            b.b = (float)uVar26;
                            b.a = fVar27;
                            pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                                                ((Color *)&stack0xffffffa8,CVar23,b,fVar28,
                                                 (MethodInfo *)0x0);
                            fVar4 = pCVar3->g;
                            pSVar7 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                                     pCVar3->b;
                            fVar5 = pCVar3->a;
                            (pSVar29->fields).BottomColor.r = (float)pCVar3->r;
                            (pSVar29->fields).BottomColor.g = fVar4;
                            (pSVar29->fields).BottomColor.b = (float)pSVar7;
                            (pSVar29->fields).BottomColor.a = fVar5;
                            return pSVar29;
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
  pcVar31 = (code *)swi(3);
  pSVar29 = (SkyParam *)(*pcVar31)();
  return pSVar29;
}


/* SkyParamsList() */

void Assembly-CSharp.dll::Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParamsList::
     SkyParamsList__ctor(SkyParamsList *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  SortedParamsList`1[StarsParam]::SortedParamsList_1_StarsParam___ctor
            ((SortedParamsList_1_StarsParam_ *)this,
             MethodInfo__Borodar__FarlandSkies__CloudyCrownPro__DotParams__SortedParamsList<Borodar::FarlandSkies::CloudyCrownPro::DotParams::SkyParam>__SortedParamsList__
            );
  return;
}

