
/* Void ModifyMesh(VertexHelper) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyMesh
               (EnhancedGradientEffect *this,VertexHelper *vh,MethodInfo *method)

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
    stream = (List_1_UnityEngine_UIVertex_ *)
             FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::UIVertex>);
    FUN_?(stream,
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__List__);
    if (vh == (VertexHelper *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_GetUIVertexStream
              (vh,stream,(MethodInfo *)0x0);
    EnhancedGradientEffect_ModifyVertices(this,stream,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_Clear(vh,(MethodInfo *)0x0);
    UnityEngine.UI.dll::UnityEngine::UI::VertexHelper::VertexHelper_AddUIVertexTriangleStream
              (vh,stream,(MethodInfo *)0x0);
  }
  return;
}


/* Void ModifyVertices(List`1[UnityEngine.UIVertex]) */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect_ModifyVertices
               (EnhancedGradientEffect *this,List_1_UnityEngine_UIVertex_ *vertexList,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::UIVertex>__set_Item_int__UnityEngine__UIVertex_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = (*(this->klass->vtable).IsActive.methodPtr)(this,(this->klass->vtable).IsActive.method);
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (cVar1 != '\0') {
    if (vertexList == (List_1_UnityEngine_UIVertex_ *)0x0) {
DAT_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((vertexList->fields)._size != 0) {
      uVar5 = (vertexList->fields)._size;
      uVar6 = 0;
      uVar7 = uVar6;
      uVar8 = uVar6;
      fVar9 = _UNK_?;
      fVar10 = _UNK_?;
      while (uVar11 = (uint)uVar8, (int)uVar11 < (int)uVar5) {
        if (uVar5 <= uVar11) goto code_?;
        pUVar12 = (vertexList->fields)._items;
        if (pUVar12 == (UIVertex__Array *)0x0) goto DAT_?;
        if ((uint)pUVar12->max_length <= uVar11) goto code_?;
        fVar13 = *(float *)((longlong)&pUVar12->vector[0].position.y + uVar7);
        if (fVar13 < fVar10) {
          fVar10 = fVar13;
        }
        if (fVar9 < fVar13) {
          fVar9 = fVar13;
        }
        uVar7 = uVar7 + 0x6c;
        uVar8 = (ulonglong)(uVar11 + 1);
      }
      uVar7 = uVar6;
      if (fVar9 - fVar10 == 0.0) {
        while (uVar5 = (uint)uVar7, (int)uVar5 < (vertexList->fields)._size) {
          if ((uint)(vertexList->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar12 = (vertexList->fields)._items;
          if (pUVar12 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar12->max_length <= uVar5) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv0.x + uVar6);
          uVar15 = *puVar14;
          uVar16 = puVar14[1];
          uVar17 = *(undefined4 *)((longlong)&pUVar12->vector[0].uv3.z + uVar6);
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].tangent.z + uVar6);
          uVar18 = *puVar14;
          uVar19 = puVar14[1];
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].position.x + uVar6);
          uVar20 = *puVar14;
          uVar21 = puVar14[1];
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].normal.y + uVar6);
          uVar22 = *puVar14;
          uVar23 = puVar14[1];
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv1.x + uVar6);
          uVar24 = *puVar14;
          uVar25 = puVar14[1];
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv2.x + uVar6);
          uVar26 = *puVar14;
          uVar27 = puVar14[1];
          uVar28 = *(undefined8 *)((longlong)&pUVar12->vector[0].uv3.x + uVar6);
          fVar9 = ((float)(*(uint *)((longlong)&pUVar12->vector[0].color.rgba + uVar6) & 0xff) /
                   fVar2) * (this->fields).top.r;
          auVar29 = ZEXT416((uint)fVar9);
          if (fVar9 < 0.0) {
            auVar29._0_12_ = ZEXT812(0);
            auVar29._12_4_ = 0;
          }
          else if (fVar3 < fVar9) {
            auVar29 = ZEXT416((uint)fVar3);
          }
          auVar30._4_12_ = auVar29._4_12_;
          auVar30._0_4_ = auVar29._0_4_ * fVar2;
          fVar9 = (float)FUN_?((uint)uVar19 >> 0x18,uVar19,(this->fields).top.a,
                                        auVar30._0_8_);
          fVar10 = (float)FUN_?();
          fVar13 = (float)FUN_?();
          fVar31 = (float)FUN_?();
          uStack_32 = (undefined4)((ulonglong)uVar19 >> 0x20);
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar12 = (vertexList->fields)._items;
          if (pUVar12 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar12->max_length <= uVar5) goto code_?;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].position.x + uVar6);
          *puVar14 = uVar20;
          puVar14[1] = uVar21;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].normal.y + uVar6);
          *puVar14 = uVar22;
          puVar14[1] = uVar23;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].tangent.z + uVar6);
          *puVar14 = uVar18;
          puVar14[1] = CONCAT44(uStack_32,
                               CONCAT31(CONCAT21(CONCAT11((char)(int)fVar31,(char)(int)fVar13),
                                                 (char)(int)fVar10),(char)(int)fVar9));
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv0.x + uVar6);
          *puVar14 = uVar15;
          puVar14[1] = uVar16;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv1.x + uVar6);
          *puVar14 = uVar24;
          puVar14[1] = uVar25;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv2.x + uVar6);
          *puVar14 = uVar26;
          puVar14[1] = uVar27;
          *(undefined8 *)((longlong)&pUVar12->vector[0].uv3.x + uVar6) = uVar28;
          *(undefined4 *)((longlong)&pUVar12->vector[0].uv3.z + uVar6) = uVar17;
          piVar33 = &(vertexList->fields)._version;
          *piVar33 = *piVar33 + 1;
          uVar6 = uVar6 + 0x6c;
          uVar7 = (ulonglong)(uVar5 + 1);
        }
      }
      else {
        while (uVar5 = (uint)uVar7, (int)uVar5 < (vertexList->fields)._size) {
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar12 = (vertexList->fields)._items;
          if (pUVar12 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar12->max_length <= uVar5) goto code_?;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].position.x + uVar6);
          uVar18 = *puVar14;
          uVar19 = puVar14[1];
          uVar17 = *(undefined4 *)((longlong)&pUVar12->vector[0].uv3.z + uVar6);
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].tangent.z + uVar6);
          uVar26 = *puVar14;
          uVar34 = *(undefined4 *)((longlong)puVar14 + 0xc);
          CVar35 = (this->fields).bottom;
          fVar13 = (this->fields).top.r;
          puVar36 = (undefined8 *)((longlong)&pUVar12->vector[0].normal.y + uVar6);
          uVar15 = *puVar36;
          uVar16 = puVar36[1];
          puVar36 = (undefined8 *)((longlong)&pUVar12->vector[0].uv0.x + uVar6);
          uVar20 = *puVar36;
          uVar21 = puVar36[1];
          puVar36 = (undefined8 *)((longlong)&pUVar12->vector[0].uv1.x + uVar6);
          uVar22 = *puVar36;
          uVar23 = puVar36[1];
          fVar31 = fVar3 - (*(float *)((longlong)&pUVar12->vector[0].position.y + uVar6) - fVar10)
                            / (fVar9 - fVar10);
          puVar36 = (undefined8 *)((longlong)&pUVar12->vector[0].uv2.x + uVar6);
          uVar24 = *puVar36;
          uVar25 = puVar36[1];
          uVar28 = *(undefined8 *)((longlong)&pUVar12->vector[0].uv3.x + uVar6);
          if (fVar31 < 0.0) {
            fVar31 = 0.0;
          }
          else if (fVar3 < fVar31) {
            fVar31 = fVar3;
          }
          auVar37._4_12_ = CVar35._4_12_;
          auVar37._0_4_ =
               ((CVar35.r - fVar13) * fVar31 + fVar13) *
               ((float)(*(uint *)(puVar14 + 1) & 0xff) / fVar2);
          if (auVar37._0_4_ < 0.0) {
            auVar37._0_12_ = ZEXT812(0);
            auVar37._12_4_ = 0;
          }
          else if (fVar3 < auVar37._0_4_) {
            auVar37 = ZEXT416((uint)fVar3);
          }
          auVar38._4_12_ = auVar37._4_12_;
          auVar38._0_4_ = auVar37._0_4_ * fVar2;
          fVar13 = (float)FUN_?(*(uint *)(puVar14 + 1) >> 0x18,auVar38._0_8_);
          fVar31 = (float)FUN_?();
          fVar39 = (float)FUN_?();
          fVar40 = (float)FUN_?();
          if ((uint)(vertexList->fields)._size <= uVar5) goto code_?;
          pUVar12 = (vertexList->fields)._items;
          if (pUVar12 == (UIVertex__Array *)0x0) goto DAT_?;
          if ((uint)pUVar12->max_length <= uVar5) goto code_?;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].position.x + uVar6);
          *puVar14 = uVar18;
          puVar14[1] = uVar19;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].normal.y + uVar6);
          *puVar14 = uVar15;
          puVar14[1] = uVar16;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].tangent.z + uVar6);
          *puVar14 = uVar26;
          puVar14[1] = CONCAT44(uVar34,CONCAT31(CONCAT21(CONCAT11((char)(int)fVar40,(char)(int)fVar39)
                                                       ,(char)(int)fVar31),(char)(int)fVar13));
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv0.x + uVar6);
          *puVar14 = uVar20;
          puVar14[1] = uVar21;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv1.x + uVar6);
          *puVar14 = uVar22;
          puVar14[1] = uVar23;
          puVar14 = (undefined8 *)((longlong)&pUVar12->vector[0].uv2.x + uVar6);
          *puVar14 = uVar24;
          puVar14[1] = uVar25;
          *(undefined8 *)((longlong)&pUVar12->vector[0].uv3.x + uVar6) = uVar28;
          *(undefined4 *)((longlong)&pUVar12->vector[0].uv3.z + uVar6) = uVar17;
          piVar33 = &(vertexList->fields)._version;
          *piVar33 = *piVar33 + 1;
          uVar6 = uVar6 + 0x6c;
          uVar7 = (ulonglong)(uVar5 + 1);
        }
      }
    }
  }
  return;
}


/* EnhancedGradientEffect() */

void Assembly-CSharp.dll::Gamestrap::EnhancedGradientEffect::EnhancedGradientEffect__ctor
               (EnhancedGradientEffect *this,MethodInfo *method)

{
  uVar1 = _UNK_?;
  uVar2 = _UNK_?;
  bVar3 = cRam_? == '\0';
  uVar4 = _UNK_?;
  (this->fields).top.r = (float)_UNK_?;
  uVar5 = _UNK_?;
  (this->fields).top.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields).top.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields).top.a = (float)uVar4;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar4 = _UNK_?;
  (this->fields).bottom.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar2 = _UNK_?;
  (this->fields).bottom.g = (float)uVar4;
  _UNK_? = (undefined4)uVar1;
  _UNK_? = SUB84(uVar1,4);
  uVar4 = _UNK_?;
  (this->fields).bottom.b = (float)_UNK_?;
  _UNK_? = uVar2;
  (this->fields).bottom.a = (float)uVar4;
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
    uVar2 = _UNK_?;
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
      uStack_23 = uVar2;
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
      uVar2 = _UNK_?;
      uVar21 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar2._0_4_ = (pOVar6->_1).initializationExceptionGCHandle;
  uVar2._4_4_ = (pOVar6->_1).cctor_started;
  uVar2 = FUN_?(uVar2);
  FUN_?(uVar2,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

