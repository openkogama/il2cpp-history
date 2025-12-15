
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyMesh(EnhancedGradientEffect *this,VertexHelper *vh,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 != '\0') {
    stream = (List_1_UnityEngine_UIVertex_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    FUN_?(stream,MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream(vh,stream,(MethodInfo *)0x0);
    EnhancedGradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream(vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyVertices(EnhancedGradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) {
DAT_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((vertexList->fields)._size != 0) {
      fVar3 = 3.4028235e+38;
      fVar4 = -3.4028235e+38;
      uVar5 = (vertexList->fields)._size;
      uVar6 = 0;
      uVar7 = uVar6;
      uVar8 = uVar6;
      while (uVar9 = (uint)uVar8, (int)uVar9 < (int)uVar5) {
        if (uVar5 <= uVar9) goto code_?;
        pUVar10 = (vertexList->fields)._items;
        if (pUVar10 == (UIVertex__Array *)0x0) goto DAT_?;
        if ((uint)pUVar10->max_length <= uVar9) goto code_?;
        fVar11 = *(float *)((longlong)&pUVar10->vector[0].position.y + uVar7);
        if (fVar11 < fVar3) {
          fVar3 = fVar11;
        }
        if (fVar4 < fVar11) {
          fVar4 = fVar11;
        }
        uVar7 = uVar7 + 0x6c;
        uVar8 = (ulonglong)(uVar9 + 1);
      }
      uVar7 = uVar6;
      if (fVar4 - fVar3 == 0.0) {
        while (uVar5 = (uint)uVar7, (int)uVar5 < (vertexList->fields)._size) {
          if ((uint)(vertexList->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar10 = (vertexList->fields)._items;
          if (pUVar10 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar10->max_length <= uVar5) {
code_?:
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv0.x + uVar6);
          uVar13 = *puVar12;
          uVar14 = puVar12[1];
          uVar15 = *(undefined4 *)((longlong)&pUVar10->vector[0].uv3.z + uVar6);
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].tangent.z + uVar6);
          uVar16 = *puVar12;
          uVar17 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].position.x + uVar6);
          uVar18 = *puVar12;
          uVar19 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].normal.y + uVar6);
          uVar20 = *puVar12;
          uVar21 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv1.x + uVar6);
          uVar22 = *puVar12;
          uVar23 = puVar12[1];
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv2.x + uVar6);
          uVar24 = *puVar12;
          uVar25 = puVar12[1];
          uVar26 = *(undefined8 *)((longlong)&pUVar10->vector[0].uv3.x + uVar6);
          fVar4 = ((float)(*(uint *)((longlong)&pUVar10->vector[0].color.rgba + uVar6) & 0xff) / 255.0) * (this->fields).top.r;
          auVar27 = ZEXT416((uint)fVar4);
          if (fVar4 < 0.0) {
            auVar27._0_12_ = ZEXT812(0);
            auVar27._12_4_ = 0;
          }
          else if (1.0 < fVar4) {
            auVar27._0_12_ = ZEXT812(0x3f800000);
            auVar27._12_4_ = 0;
          }
          auVar28._4_12_ = auVar27._4_12_;
          auVar28._0_4_ = auVar27._0_4_ * 255.0;
          fVar4 = (float)FUN_?((uint)uVar17 >> 0x18,uVar17,(this->fields).top.a,auVar28._0_8_);
          fVar3 = (float)FUN_?();
          fVar11 = (float)FUN_?();
          fVar29 = (float)FUN_?();
          uStack_30 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar10 = (vertexList->fields)._items;
          if (pUVar10 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar10->max_length <= uVar5) goto code_?;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].position.x + uVar6);
          *puVar12 = uVar18;
          puVar12[1] = uVar19;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].normal.y + uVar6);
          *puVar12 = uVar20;
          puVar12[1] = uVar21;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].tangent.z + uVar6);
          *puVar12 = uVar16;
          puVar12[1] = CONCAT44(uStack_30,CONCAT31(CONCAT21(CONCAT11((char)(int)fVar29,(char)(int)fVar11),(char)(int)fVar3),(char)(int)fVar4));
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv0.x + uVar6);
          *puVar12 = uVar13;
          puVar12[1] = uVar14;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv1.x + uVar6);
          *puVar12 = uVar22;
          puVar12[1] = uVar23;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv2.x + uVar6);
          *puVar12 = uVar24;
          puVar12[1] = uVar25;
          *(undefined8 *)((longlong)&pUVar10->vector[0].uv3.x + uVar6) = uVar26;
          *(undefined4 *)((longlong)&pUVar10->vector[0].uv3.z + uVar6) = uVar15;
          piVar31 = &(vertexList->fields)._version;
          *piVar31 = *piVar31 + 1;
          uVar6 = uVar6 + 0x6c;
          uVar7 = (ulonglong)(uVar5 + 1);
        }
      }
      else {
        while (uVar5 = (uint)uVar7, (int)uVar5 < (vertexList->fields)._size) {
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar10 = (vertexList->fields)._items;
          if (pUVar10 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar10->max_length <= uVar5) goto code_?;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].position.x + uVar6);
          uVar16 = *puVar12;
          uVar17 = puVar12[1];
          uVar15 = *(undefined4 *)((longlong)&pUVar10->vector[0].uv3.z + uVar6);
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].tangent.z + uVar6);
          uVar24 = *puVar12;
          uVar32 = *(undefined4 *)((longlong)puVar12 + 0xc);
          CVar33 = (this->fields).bottom;
          fVar11 = (this->fields).top.r;
          puVar34 = (undefined8 *)((longlong)&pUVar10->vector[0].normal.y + uVar6);
          uVar13 = *puVar34;
          uVar14 = puVar34[1];
          puVar34 = (undefined8 *)((longlong)&pUVar10->vector[0].uv0.x + uVar6);
          uVar18 = *puVar34;
          uVar19 = puVar34[1];
          puVar34 = (undefined8 *)((longlong)&pUVar10->vector[0].uv1.x + uVar6);
          uVar20 = *puVar34;
          uVar21 = puVar34[1];
          fVar29 = 1.0 - (*(float *)((longlong)&pUVar10->vector[0].position.y + uVar6) - fVar3) / (fVar4 - fVar3);
          puVar34 = (undefined8 *)((longlong)&pUVar10->vector[0].uv2.x + uVar6);
          uVar22 = *puVar34;
          uVar23 = puVar34[1];
          uVar26 = *(undefined8 *)((longlong)&pUVar10->vector[0].uv3.x + uVar6);
          if (fVar29 < 0.0) {
            fVar29 = 0.0;
          }
          else if (1.0 < fVar29) {
            fVar29 = 1.0;
          }
          auVar35._4_12_ = CVar33._4_12_;
          auVar35._0_4_ = ((CVar33.r - fVar11) * fVar29 + fVar11) * ((float)(*(uint *)(puVar12 + 1) & 0xff) / 255.0);
          if (auVar35._0_4_ < 0.0) {
            auVar35._0_12_ = ZEXT812(0);
            auVar35._12_4_ = 0;
          }
          else if (1.0 < auVar35._0_4_) {
            auVar35 = ZEXT816(0x3f800000);
          }
          auVar36._4_12_ = auVar35._4_12_;
          auVar36._0_4_ = auVar35._0_4_ * 255.0;
          fVar11 = (float)FUN_?(*(uint *)(puVar12 + 1) >> 0x18,auVar36._0_8_);
          fVar29 = (float)FUN_?();
          fVar37 = (float)FUN_?();
          fVar38 = (float)FUN_?();
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar10 = (vertexList->fields)._items;
          if (pUVar10 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar10->max_length <= uVar5) goto code_?;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].position.x + uVar6);
          *puVar12 = uVar16;
          puVar12[1] = uVar17;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].normal.y + uVar6);
          *puVar12 = uVar13;
          puVar12[1] = uVar14;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].tangent.z + uVar6);
          *puVar12 = uVar24;
          puVar12[1] = CONCAT44(uVar32,CONCAT31(CONCAT21(CONCAT11((char)(int)fVar38,(char)(int)fVar37),(char)(int)fVar29),(char)(int)fVar11));
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv0.x + uVar6);
          *puVar12 = uVar18;
          puVar12[1] = uVar19;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv1.x + uVar6);
          *puVar12 = uVar20;
          puVar12[1] = uVar21;
          puVar12 = (undefined8 *)((longlong)&pUVar10->vector[0].uv2.x + uVar6);
          *puVar12 = uVar22;
          puVar12[1] = uVar23;
          *(undefined8 *)((longlong)&pUVar10->vector[0].uv3.x + uVar6) = uVar26;
          *(undefined4 *)((longlong)&pUVar10->vector[0].uv3.z + uVar6) = uVar15;
          piVar31 = &(vertexList->fields)._version;
          *piVar31 = *piVar31 + 1;
          uVar6 = uVar6 + 0x6c;
          uVar7 = (ulonglong)(uVar5 + 1);
        }
      }
    }
  }
  return;
}


/* EnhancedGradientEffect() */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect__ctor(EnhancedGradientEffect *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).top.r = 1.0;
  (this->fields).top.g = 1.0;
  (this->fields).top.b = 1.0;
  (this->fields).top.a = 1.0;
  (this->fields).bottom.r = 1.0;
  (this->fields).bottom.g = 1.0;
  (this->fields).bottom.b = 1.0;
  (this->fields).bottom.a = 1.0;
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
                while (ppMVar16 = ppMVar15 + 0x3052a1b1, ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1), *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
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

