
/* Void ScreenShotDataTexHandler(Texture2D) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_ScreenShotDataTexHandler
               (AvatarScreenShooter *this,Texture2D *screenshotTex,MethodInfo *method)

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
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
            ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
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
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,screenshotTex,(this->fields).successMessage,
             (pAVar6->fields)._._.method);
  return;
}


/* Void TakeScreenShot(Action`2[UnityEngine.Texture2D,String], MVBody, Boolean, String) */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter_TakeScreenShot
               (AvatarScreenShooter *this,Action_2_UnityEngine_Texture2D_String_ *callback,
               MVBody *body,bool ignoreAccessories,String *successMessage,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Texture2D>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_screenshot_generation_of_avatar_,(MethodInfo *)0x0);
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
      pGVar7 = (GameObject *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                         ((Object *)pGVar7,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
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
      pMVar8 = 
      SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
      ;
      pGVar7 = (this->fields).bodyCloneGO;
      if (pGVar7 == (GameObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((
          SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     SkinnedMeshOptimizer__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SkinnedMeshOptimizer>______
                     );
      }
      p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_4
                         (pGVar7,0,((pMVar8->field7_0x38).rgctx_data)->method);
      uVar2 = 0;
      if (p_Var8 == (_Il2CppFullySharedGenericType__Array *)0x0) goto DAT_?;
      pp_Var14 = p_Var8->vector;
      for (uVar10 = uVar2;
          pMVar8 = 
          AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
          , (int)uVar10 < (int)p_Var8->max_length; uVar10 = uVar10 + 1) {
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
        if ((pMVar11 == (MVGameControllerBase *)0x0) ||
           (this_00 = (pMVar11->fields).skinnedMeshOptimizeManager,
           this_00 == (SkinnedMeshOptimizeManager *)0x0)) goto DAT_?;
        SStack_12.skinnedMesh = (List_1_UnityEngine_SkinnedMeshRenderer_ *)p_Var3[2].monitor;
        SStack_12.mesh = (List_1_UnityEngine_MeshRenderer_ *)p_Var3[3].klass;
        SkinnedMeshOptimizeManager::SkinnedMeshOptimizeManager_RemoveoptimizationData
                  (this_00,&SStack_12,(MethodInfo *)0x0);
        if ((uint)p_Var8->max_length <= uVar10) goto code_?;
        if ((SkinnedMeshOptimizer *)*pp_Var14 == (SkinnedMeshOptimizer *)0x0) goto DAT_?;
        SkinnedMeshOptimizer::SkinnedMeshOptimizer_TurnOffMesh
                  ((SkinnedMeshOptimizer *)*pp_Var14,(MethodInfo *)0x0);
        pp_Var14 = pp_Var14 + 1;
      }
      if (ignoreAccessories != 0) {
        pGVar7 = (this->fields).bodyCloneGO;
        if (pGVar7 == (GameObject *)0x0) goto DAT_?;
        if ((
            AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       AvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<AvatarAccessory>______
                       );
        }
        p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_4
                           (pGVar7,0,((pMVar8->field7_0x38).rgctx_data)->method);
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
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar13 = obj[1].klass;
          if (pOVar13 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          gcHandlePtr = (void *)(*pcRam_?)(pOVar13);
          obj_00 = (Object_1 *)
                   UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (gcHandlePtr,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
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
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                    (obj_00,0.0,(MethodInfo *)0x0);
          pp_Var14 = pp_Var14 + 1;
        }
      }
      pGVar7 = (this->fields).bodyCloneGO;
      this_01 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<UnityEngine::Texture2D>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__AvatarScreenShooter__ScreenShotDataTexHandler_UnityEngine__Texture2D_,
                 (MethodInfo *)0x0);
      AvatarScreenshotGenerator::AvatarScreenshotGenerator_Generate
                (pGVar7,(Action_1_UnityEngine_Texture2D_ *)this_01,(MethodInfo *)0x0);
    }
    (this->fields).isMakingScreenShot = 1;
  }
  return;
}


/* AvatarScreenShooter() */

void Assembly-CSharp.dll::AvatarScreenShooter::AvatarScreenShooter__ctor
               (AvatarScreenShooter *this,MethodInfo *method)

{
  fVar1 = TypeRef__System__Activator__T._0_4_;
  uVar2 = _UNK_?;
  bVar3 = cRam_? == '\0';
  (this->fields).cameraOffset.x = (float)_UNK_?;
  (this->fields).cameraOffset.y = (float)uVar2;
  (this->fields).cameraOffset.z = fVar1;
  (this->fields).lookAtOffset.x = 0.0;
  uVar4 = _UNK_?;
  (this->fields).lookAtOffset.y = 0.0;
  uVar2 = _UNK_?;
  (this->fields).previewPosition.m_XMin = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields).previewPosition.m_YMin = (float)uVar2;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar2 = _UNK_?;
  (this->fields).previewPosition.m_Width = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields).previewPosition.m_Height = (float)uVar2;
  (this->fields).lookAtOffset.z = 0.0;
  if (bVar3) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar6 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar7 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar8 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar9 = ppMVar7;
  if (lVar8 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar8 = lRam_?;
  }
  else {
    do {
      uVar10 = (uint)ppMVar9;
      LOCK();
      bVar3 = uVar10 != uRam_?;
      uVar11 = uVar10;
      uVar12 = uVar10 + 1;
      if (bVar3) {
        uVar11 = uRam_?;
        uVar12 = uRam_?;
      }
      uRam_? = uVar12;
      UNLOCK();
    } while ((bVar3) && (ppMVar9 = (MethodInfo **)(ulonglong)uVar11, uVar10 = uVar11, uVar11 != 2)
            );
    while (uVar10 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar10 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar8;
  puVar13 = &(pOVar6->_1).field_0x1c;
  LOCK();
  bVar3 = *(int *)puVar13 == 1;
  if (bVar3) {
    *(undefined4 *)puVar13 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar10 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar14 = &(pOVar6->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar3 = *puVar14 == 1;
  if (bVar3) {
    *puVar14 = 1;
  }
  uVar10 = uRam_?;
  UNLOCK();
  if (bVar3) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar10 = GetCurrentThreadId();
    psVar15 = &(pOVar6->_1).cctor_thread;
    LOCK();
    bVar3 = (ulonglong)uVar10 == *psVar15;
    if (bVar3) {
      *psVar15 = (ulonglong)uVar10;
    }
    UNLOCK();
    if (bVar3) {
      return;
    }
    while( true ) {
      puVar13 = &(pOVar6->_1).field_0x1c;
      LOCK();
      bVar3 = *(int *)puVar13 == 1;
      if (bVar3) {
        *(undefined4 *)puVar13 = 1;
      }
      UNLOCK();
      if (bVar3) break;
      LOCK();
      lVar8._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
      lVar8._4_4_ = (pOVar6->_1).cctor_started;
      if (lVar8 == 0) {
        (pOVar6->_1).initializationExceptionGCHandle = 0;
        (pOVar6->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar8 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar16._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
    lVar16._4_4_ = (pOVar6->_1).cctor_started;
    if (lVar16 == 0) {
      return;
    }
  }
  else {
    uVar10 = GetCurrentThreadId();
    LOCK();
    (pOVar6->_1).cctor_thread = (ulonglong)uVar10;
    UNLOCK();
    LOCK();
    (pOVar6->_1).cctor_finished_or_no_cctor = 1;
    uVar10 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar10 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar6->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar6);
      ppMVar9 = ppMVar7;
      pIVar17 = (Il2CppClass *)pOVar6;
code_?:
      do {
        if (ppMVar9 == (MethodInfo **)0x0) {
          FUN_?(pIVar17);
          if (pIVar17->field_count != 0) {
            ppMVar9 = pIVar17->methods;
            pMVar18 = *ppMVar9;
code_?:
            if (pMVar18 != (MethodInfo *)0x0) {
              if ((*pMVar18->name == '.') && ((pMVar18->flags & 0x800) != 0)) {
                ppMVar19 = ppMVar7;
                while (ppMVar20 = ppMVar19 + 0x3052a1b1,
                      ppMVar19 = (MethodInfo **)((longlong)ppMVar19 + 1),
                      *(char *)ppMVar20 == (pMVar18->name + -1)[(longlong)ppMVar19]) {
                  if (ppMVar19 == (MethodInfo **)0x7) {
                    FUN_?(pMVar18,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar9 = ppMVar9 + 1;
          if (ppMVar9 < pIVar17->methods + pIVar17->field_count) {
            pMVar18 = *ppMVar9;
            goto code_?;
          }
        }
        pIVar17 = pIVar17->parent;
        ppMVar9 = ppMVar7;
      } while (pIVar17 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar6->_1).cctor_thread = 0;
    uVar21 = _UNK_?;
    uVar4 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar6->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar6->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_24 < 0x10) {
code_?:
      lVar8 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
      }
      uStack_23 = uVar4;
      uStack_24 = uVar21;
      lVar16 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar8 != 0) {
        *(longlong *)(lVar16 + 0x28U) = lVar8;
        if (iRam_? != 0) {
          uVar10 = (uint)(lVar16 + 0x28U >> 0xc);
          puVar26 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar27 = *puVar26;
            LOCK();
            uVar21 = *puVar26;
            if (uVar27 == uVar21) {
              *puVar26 = uVar27 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar27 != uVar21);
        }
      }
      FUN_?(pOVar6,lVar16);
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar19 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar4 = _UNK_?;
      uVar21 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar4._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar4._4_4_ = (pOVar6->_1).cctor_started;
  uVar4 = FUN_?(uVar4);
  FUN_?(uVar4,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

