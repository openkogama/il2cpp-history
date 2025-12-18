
/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_ScreenShotDataTexHandler(AvatarScreenShooter *this,Texture2D *screenshotTex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields).bodyCloneGO;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)obj,0.0,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).bodyCloneGO = (GameObject *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodyCloneGO >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields).callback;
  (this->fields).isMakingScreenShot = 0;
  if (pAVar6 == (Action_2_UnityEngine_Texture2D_String_ *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)((pAVar6->fields)._._.method_code,screenshotTex,(this->fields).successMessage,(pAVar6->fields)._._.method);
  return;
}


/* Void TakeScreenShot(Action`2[UnityEngine.Texture2D,String], MVBody, Boolean, String) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot(AvatarScreenShooter *this,Action_2_UnityEngine_Texture2D_String_ *callback,MVBody *body,bool ignoreAccessories,String *successMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______);
    LOCK();
    UNLOCK();
    FUN_?(&SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_screenshot_generation_of_avatar_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_screenshot_generation_of_avatar_,(MethodInfo *)0x0);
  iVar1 = iRam_?;
  if ((this->fields).isMakingScreenShot == 0) {
    (this->fields).callback = callback;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).callback >> 0xc);
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
    (this->fields).successMessage = successMessage;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).successMessage >> 0xc);
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
    if (body != (MVBody *)0x0) {
      pGVar7 = (body->fields)._._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pGVar7 = (GameObject *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pGVar7,UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_);
      bVar6 = iRam_? != 0;
      (this->fields).bodyCloneGO = pGVar7;
      if (bVar6) {
        uVar2 = (uint)((ulonglong)&(this->fields).bodyCloneGO >> 0xc);
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
      pMVar8 = SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______;
      pGVar7 = (this->fields).bodyCloneGO;
      if (pGVar7 == (GameObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______);
      }
      p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar7,0,((pMVar8->field7_0x38).rgctx_data)->method);
      uVar2 = 0;
      if (p_Var8 == (_Il2CppFullySharedGenericType__Array *)0x0) goto DAT_?;
      pp_Var14 = p_Var8->vector;
      for (uVar10 = uVar2; pMVar8 = AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______, (int)uVar10 < (int)p_Var8->max_length; uVar10 = uVar10 + 1) {
        if ((uint)p_Var8->max_length <= uVar10) goto code_?;
        p_Var3 = *pp_Var14;
        if (p_Var3 == (_Il2CppFullySharedGenericType *)0x0) goto DAT_?;
        bVar6 = cRam_? == '\0';
        *(undefined1 *)&p_Var3[3].monitor = 0;
        if (bVar6) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar11 == (MVGameControllerBase *)0x0) || (this_00 = (pMVar11->fields).skinnedMeshOptimizeManager, this_00 == (SkinnedMeshOptimizeManager *)0x0)) goto DAT_?;
        SStack_12.skinnedMesh = (List_1_UnityEngine_SkinnedMeshRenderer_ *)p_Var3[2].monitor;
        SStack_12.mesh = (List_1_UnityEngine_MeshRenderer_ *)p_Var3[3].klass;
        SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData(this_00,&SStack_12,(MethodInfo *)0x0);
        if ((uint)p_Var8->max_length <= uVar10) goto code_?;
        if ((SkinnedMeshOptimizer *)*pp_Var14 == (SkinnedMeshOptimizer *)0x0) goto DAT_?;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh((SkinnedMeshOptimizer *)*pp_Var14,(MethodInfo *)0x0);
        pp_Var14 = pp_Var14 + 1;
      }
      if (ignoreAccessories != 0) {
        pGVar7 = (this->fields).bodyCloneGO;
        if (pGVar7 == (GameObject *)0x0) goto DAT_?;
        if ((AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______);
        }
        p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar7,0,((pMVar8->field7_0x38).rgctx_data)->method);
        if (p_Var8 == (_Il2CppFullySharedGenericType__Array *)0x0) goto DAT_?;
        pp_Var14 = p_Var8->vector;
        for (; (int)uVar2 < (int)p_Var8->max_length; uVar2 = uVar2 + 1) {
          if ((uint)p_Var8->max_length <= uVar2) {
code_?:
            FUN_?();
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          obj = (Object *)*pp_Var14;
          if (obj == (Object *)0x0) goto DAT_?;
          if (cRam_? == '\0') {
            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_);
            LOCK();
            UNLOCK();
            FUN_?(&UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar13 = obj[1].klass;
          if (pOVar13 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          gcHandlePtr = (void *)(*pcRam_?)(pOVar13);
          obj_00 = (Object_1 *)UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::Unmarshal_UnmarshalUnityObject(gcHandlePtr,UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__);
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj_00,0.0,(MethodInfo *)0x0);
          pp_Var14 = pp_Var14 + 1;
        }
      }
      pGVar7 = (this->fields).bodyCloneGO;
      this_01 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::UnityAction_1_System_Object___ctor(this_01,(Object *)this,MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_,(MethodInfo *)0x0);
      AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate(pGVar7,(Action_1_UnityEngine_Texture2D_ *)this_01,(MethodInfo *)0x0);
    }
    (this->fields).isMakingScreenShot = 1;
  }
  return;
}


/* AvatarScreenShooter() */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter__ctor(AvatarScreenShooter *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).cameraOffset.x = -1.0;
  (this->fields).cameraOffset.y = 0.5;
  (this->fields).cameraOffset.z = 2.0;
  (this->fields).lookAtOffset.x = 0.0;
  (this->fields).lookAtOffset.y = 0.0;
  (this->fields).previewPosition.m_XMin = 220.0;
  (this->fields).previewPosition.m_YMin = 208.0;
  (this->fields).previewPosition.m_Width = 200.0;
  (this->fields).previewPosition.m_Height = 200.0;
  (this->fields).lookAtOffset.z = 0.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2));
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z(0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af3c, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_17 = 0;
    uStack_18 = 0;
    uStack_19 = 0xf;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar17 = &pppppppuStack_78;
    if (0xf < uStack_19) {
      pppppppuVar17 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar17);
    if (uStack_19 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      uStack_18 = 0;
      uStack_19 = 0xf;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar17 = apppppppuStack_58;
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
      }
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar17);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar21 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar22 = *puVar21;
            LOCK();
            uVar23 = *puVar21;
            if (uVar22 == uVar23) {
              *puVar21 = uVar22 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar22 != uVar23);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_20) {
        pppppppuVar17 = apppppppuStack_58[0];
        if ((0xfff < uStack_20 + 1) && (pppppppuVar17 = (undefined8 *******)apppppppuStack_58[0][-1], 0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar17)))) goto code_?;
        func_?(pppppppuVar17);
      }
      goto code_?;
    }
    pppppppuVar17 = pppppppuStack_78;
    if ((uStack_19 + 1 < 0x1000) || (pppppppuVar17 = (undefined8 *******)pppppppuStack_78[-1], (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar17)) < 0x20)) {
      func_?(pppppppuVar17);
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar24._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar24._4_4_ = (pOVar2->_1).cctor_started;
  uVar24 = FUN_?(uVar24);
  FUN_?(uVar24,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

