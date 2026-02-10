
/* Void Register() */

void Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial_Register
               (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    unlockPriceGold = (this->fields).priceGold;
    pMVar3 = (pMVar2->fields)._MaterialRepository_k__BackingField;
    name = (this->fields).materialName;
    description = (this->fields).description;
    materialSound = (this->fields).materialSound;
    modifierPackageType = (this->fields).modifierPackageType;
    isUnlocked = (this->fields).isUnlocked;
    lVar4 = FUN_?(TypeInfo__System__Single,5);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) != 0) {
        *(float *)(lVar4 + 0x20) = (this->fields).friction;
        if (1 < *(uint *)(lVar4 + 0x18)) {
          *(float *)(lVar4 + 0x24) = (this->fields).bouncyness;
          if (2 < *(uint *)(lVar4 + 0x18)) {
            *(float *)(lVar4 + 0x28) = (this->fields).softness;
            if (3 < *(uint *)(lVar4 + 0x18)) {
              *(float *)(lVar4 + 0x2c) = (this->fields).staticFriction;
              if (4 < *(uint *)(lVar4 + 0x18)) {
                *(float *)(lVar4 + 0x30) = (this->fields).toughness;
                if (pMVar3 != (MVMaterialRepository *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                                 );
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__MVMaterial);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pLVar5 = (pMVar3->fields).materials;
                  if (pLVar5 != (List_1_MVMaterial_ *)0x0) {
                    materialId = (pLVar5->fields)._size;
                    if ((((*(int *)(lVar4 + 0x18) != 0) &&
                         (fVar6 = *(float *)(lVar4 + 0x20), 1 < *(uint *)(lVar4 + 0x18))) &&
                        (fVar7 = *(float *)(lVar4 + 0x24), 2 < *(uint *)(lVar4 + 0x18))) &&
                       ((fVar8 = *(float *)(lVar4 + 0x28), 3 < *(uint *)(lVar4 + 0x18) &&
                        (fVar9 = *(float *)(lVar4 + 0x2c), 4 < *(uint *)(lVar4 + 0x18))))) {
                      fVar10 = *(float *)(lVar4 + 0x30);
                      this_00 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
                      aPStack_11[0].friction = fVar6;
                      aPStack_11[0].bouncyness = fVar7;
                      aPStack_11[0].softness = fVar8;
                      aPStack_11[0].staticFriction = fVar9;
                      aPStack_11[0].toughness = fVar10;
                      MVMaterial::MVMaterial__ctor_3
                                (this_00,materialId,name,description,aPStack_11,materialSound,
                                 modifierPackageType,unlockPriceGold,isUnlocked,
                                 (MaterialButtonTextureGenerator *)0x0,(MethodInfo *)0x0);
                      pMVar12 = 
                      MethodInfo__System__Collections__Generic__List<MVMaterial>__Add_MVMaterial_;
                      pMVar13 = (pLVar5->fields)._items;
                      piVar14 = &(pLVar5->fields)._version;
                      *piVar14 = *piVar14 + 1;
                      if (pMVar13 == (MVMaterial__Array *)0x0) {
                        FUN_?();
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      uVar16 = (pLVar5->fields)._size;
                      if (uVar16 < (uint)pMVar13->max_length) {
                        (pLVar5->fields)._size = uVar16 + 1;
                      }
                      else {
                        uVar16 = (pLVar5->fields)._size;
                        FUN_?(pLVar5,uVar16 + 1,
                                      (pMVar12->klass->rgctx_data[0xe].method)->klass->rgctx_data
                                      [0xf].rgctxDataDummy);
                        pMVar13 = (pLVar5->fields)._items;
                        (pLVar5->fields)._size = uVar16 + 1;
                        if (pMVar13 == (MVMaterial__Array *)0x0) {
                          FUN_?();
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                      }
                      if ((uint)pMVar13->max_length <= uVar16) {
                        FUN_?();
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      bVar17 = iRam_? != 0;
                      pMVar13->vector[(int)uVar16] = this_00;
                      if (bVar17) {
                        uVar16 = (uint)((ulonglong)(pMVar13->vector + (int)uVar16) >> 0xc);
                        puVar18 = (ulonglong *)
                                 ((ulonglong)((uVar16 & 0x1fffff) >> 6) * 8 + 0xADDR);
                        do {
                          uVar19 = *puVar18;
                          LOCK();
                          uVar20 = *puVar18;
                          if (uVar19 == uVar20) {
                            *puVar18 = uVar19 | 1L << (uVar16 & 0x3f);
                          }
                          UNLOCK();
                        } while (uVar19 != uVar20);
                      }
                      return;
                    }
                    goto code_?;
                  }
                }
                goto DAT_?;
              }
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial_ToString
                   (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_INSERT_INTO__Material____Name___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object);
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetName
                     ((Object_1 *)this,(MethodInfo *)0x0);
  if (args != (Object__Array *)0x0) {
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,0,pSVar1);
    pSVar1 = (this->fields).description;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,1,pSVar1);
    pSVar1 = (this->fields).path;
    if (pSVar1 != (String *)0x0) {
      lVar2 = FUN_?(pSVar1,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,2,pSVar1);
    afStackX_18[0] = (float)(this->fields).materialSound;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,3,lVar2);
    afStackX_18[0] = (float)(this->fields).modifierPackageType;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,4,lVar2);
    afStackX_18[0] = (float)(this->fields).priceGold;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,5,lVar2);
    afStackX_18[0] = (this->fields).friction;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,6,lVar2);
    afStackX_18[0] = (this->fields).bouncyness;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,7,lVar2);
    afStackX_18[0] = (this->fields).softness;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,8,lVar2);
    afStackX_18[0] = (this->fields).staticFriction;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar5 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar5 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,9,lVar2);
    afStackX_18[0] = (this->fields).toughness;
    lVar2 = FUN_?(uRam_?,afStackX_18);
    if (lVar2 != 0) {
      lVar2 = FUN_?(lVar2,(args->klass->_0).element_class);
      if (lVar2 == 0) {
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar4 = (code *)swi(3);
        pSVar1 = (String *)(*pcVar4)();
        return pSVar1;
      }
    }
    FUN_?(args,10);
    pSVar1 = StringLiteral_INSERT_INTO__Material____Name___;
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor_3(&PStack_6,args,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar1,&PStack_7,(MethodInfo *)0x0);
    return pSVar1;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* OverrideMaterial() */

void Assembly-CSharp.dll::OverrideMaterial::OverrideMaterial__ctor
               (OverrideMaterial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Cube_Materials_scarletred00);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Light_Red);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_basic_building_material_u000AHint_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = iRam_?;
  (this->fields).friction = 0.43;
  (this->fields).softness = 1.0;
  (this->fields).staticFriction = 20.0;
  (this->fields).materialName = StringLiteral_Light_Red;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).materialName >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).description = StringLiteral_A_basic_building_material_u000AHint_;
  iVar7 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).description >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).path = StringLiteral_Cube_Materials_scarletred00;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).path >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  bVar6 = cRam_? == '\0';
  (this->fields).isUnlocked = 1;
  if (bVar6) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar8 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar9 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar10 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar11 = ppMVar9;
  if (lVar10 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar10 = lRam_?;
  }
  else {
    do {
      uVar2 = (uint)ppMVar11;
      LOCK();
      bVar6 = uVar2 != uRam_?;
      uVar12 = uVar2;
      uVar13 = uVar2 + 1;
      if (bVar6) {
        uVar12 = uRam_?;
        uVar13 = uRam_?;
      }
      uRam_? = uVar13;
      UNLOCK();
    } while ((bVar6) && (ppMVar11 = (MethodInfo **)(ulonglong)uVar12, uVar2 = uVar12, uVar12 != 2)
            );
    while (uVar2 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar2 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar10;
  puVar14 = &(pOVar8->_1).field_0x1c;
  LOCK();
  bVar6 = *(int *)puVar14 == 1;
  if (bVar6) {
    *(undefined4 *)puVar14 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar2 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar15 = &(pOVar8->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar6 = *puVar15 == 1;
  if (bVar6) {
    *puVar15 = 1;
  }
  uVar2 = uRam_?;
  UNLOCK();
  if (bVar6) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar2 = GetCurrentThreadId();
    psVar16 = &(pOVar8->_1).cctor_thread;
    LOCK();
    bVar6 = (ulonglong)uVar2 == *psVar16;
    if (bVar6) {
      *psVar16 = (ulonglong)uVar2;
    }
    UNLOCK();
    if (bVar6) {
      return;
    }
    while( true ) {
      puVar14 = &(pOVar8->_1).field_0x1c;
      LOCK();
      bVar6 = *(int *)puVar14 == 1;
      if (bVar6) {
        *(undefined4 *)puVar14 = 1;
      }
      UNLOCK();
      if (bVar6) break;
      LOCK();
      lVar10._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
      lVar10._4_4_ = (pOVar8->_1).cctor_started;
      if (lVar10 == 0) {
        (pOVar8->_1).initializationExceptionGCHandle = 0;
        (pOVar8->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar10 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar17._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
    lVar17._4_4_ = (pOVar8->_1).cctor_started;
    if (lVar17 == 0) {
      return;
    }
  }
  else {
    uVar2 = GetCurrentThreadId();
    LOCK();
    (pOVar8->_1).cctor_thread = (ulonglong)uVar2;
    UNLOCK();
    LOCK();
    (pOVar8->_1).cctor_finished_or_no_cctor = 1;
    uVar2 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar2 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar8->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar8);
      ppMVar11 = ppMVar9;
      pIVar18 = (Il2CppClass *)pOVar8;
code_?:
      do {
        if (ppMVar11 == (MethodInfo **)0x0) {
          FUN_?(pIVar18);
          if (pIVar18->field_count != 0) {
            ppMVar11 = pIVar18->methods;
            pMVar19 = *ppMVar11;
code_?:
            if (pMVar19 != (MethodInfo *)0x0) {
              if ((*pMVar19->name == '.') && ((pMVar19->flags & 0x800) != 0)) {
                ppMVar20 = ppMVar9;
                while (ppMVar21 = ppMVar20 + 0x3052aacd,
                      ppMVar20 = (MethodInfo **)((longlong)ppMVar20 + 1),
                      *(char *)ppMVar21 == (pMVar19->name + -1)[(longlong)ppMVar20]) {
                  if (ppMVar20 == (MethodInfo **)0x7) {
                    FUN_?(pMVar19,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar11 = ppMVar11 + 1;
          if (ppMVar11 < pIVar18->methods + pIVar18->field_count) {
            pMVar19 = *ppMVar11;
            goto code_?;
          }
        }
        pIVar18 = pIVar18->parent;
        ppMVar11 = ppMVar9;
      } while (pIVar18 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar8->_1).cctor_thread = 0;
    uVar3 = _UNK_?;
    uVar22 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar8->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_23 = 0;
    uStack_24 = _UNK_?;
    uStack_25 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar8->_0).byval_arg,0,0);
    pppppppuVar18 = &pppppppuStack_78;
    if (0xf < uStack_25) {
      pppppppuVar18 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar18);
    if (uStack_25 < 0x10) {
code_?:
      lVar10 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar18 = apppppppuStack_58;
      if (0xf < uStack_26) {
        pppppppuVar18 = apppppppuStack_58[0];
      }
      uStack_24 = uVar22;
      uStack_25 = uVar3;
      lVar17 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar18);
      if (lVar10 != 0) {
        *(longlong *)(lVar17 + 0x28U) = lVar10;
        if (iRam_? != 0) {
          uVar2 = (uint)(lVar17 + 0x28U >> 0xc);
          puVar5 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar4 = *puVar5;
            LOCK();
            uVar3 = *puVar5;
            if (uVar4 == uVar3) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar4 != uVar3);
        }
      }
      FUN_?(pOVar8,lVar17);
      if (0xf < uStack_26) {
        pppppppuVar18 = apppppppuStack_58[0];
        if ((0xfff < uStack_26 + 1) &&
           (pppppppuVar18 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar18))))
        goto code_?;
        func_?(pppppppuVar18);
      }
      goto code_?;
    }
    pppppppuVar18 = pppppppuStack_78;
    if ((uStack_25 + 1 < 0x1000) ||
       (pppppppuVar18 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar18)) < 0x20)) {
      func_?(pppppppuVar18);
      uVar22 = _UNK_?;
      uVar3 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar22._0_4_ = (pOVar8->_1).initializationExceptionGCHandle;
  uVar22._4_4_ = (pOVar8->_1).cctor_started;
  uVar22 = FUN_?(uVar22);
  FUN_?(uVar22,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}

