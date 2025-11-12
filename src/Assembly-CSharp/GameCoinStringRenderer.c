
/* Void AddString(Vector3, Vector3, Color) */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_AddString
               (GameCoinStringRenderer *this,Vector3 *start,Vector3 *end,Color *color,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Enqueue_GameCoinStringRenderer__PriceTagString_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = start->z;
  fVar2 = color->r;
  fVar3 = color->r;
  fVar4 = color->g;
  fVar5 = color->b;
  fVar6 = color->a;
  fVar7 = end->z;
  uVar8 = start->x;
  uVar9 = start->y;
  uVar10 = end->x;
  uVar11 = end->y;
  pQVar12 = (this->fields).strings;
  if (pQVar12 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    pGVar13 = (pQVar12->fields)._array;
    if (pGVar13 != (GameCoinStringRenderer_PriceTagString__Array *)0x0) {
      fVar14 = (float)uVar10;
      if ((pQVar12->fields)._size == (int)pGVar13->max_length) {
        pGVar13 = (pQVar12->fields)._array;
        iVar15 = (int)pGVar13->max_length * 2;
        if (iVar15 < (int)pGVar13->max_length + 4) {
          iVar15 = (int)pGVar13->max_length + 4;
        }
        fVar14 = (float)FUN_?(pQVar12,iVar15,
                                      MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Enqueue_GameCoinStringRenderer__PriceTagString_
                                      ->klass->rgctx_data[5].rgctxDataDummy);
      }
      pGVar13 = (pQVar12->fields)._array;
      if (pGVar13 != (GameCoinStringRenderer_PriceTagString__Array *)0x0) {
        uVar16 = (pQVar12->fields)._tail;
        if ((uint)pGVar13->max_length <= uVar16) {
          FUN_?(fVar14,pGVar13,fVar2);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        pGVar18 = pGVar13->vector + (int)uVar16;
        (pGVar18->start).x = (float)uVar8;
        (pGVar18->start).y = (float)uVar9;
        (pGVar18->start).z = fVar1;
        (pGVar18->end).x = (float)uVar10;
        pVVar19 = &pGVar13->vector[(int)uVar16].end;
        pVVar19->y = (float)uVar11;
        pVVar19->z = fVar7;
        pVVar19[1].x = fVar3;
        pVVar19[1].y = fVar4;
        pGVar13->vector[(int)uVar16].color.b = fVar5;
        pGVar13->vector[(int)uVar16].color.a = fVar6;
        pGVar13 = (pQVar12->fields)._array;
        if (pGVar13 != (GameCoinStringRenderer_PriceTagString__Array *)0x0) {
          iVar20 = (pQVar12->fields)._tail + 1;
          iVar15 = 0;
          if (iVar20 != (int)pGVar13->max_length) {
            iVar15 = iVar20;
          }
          (pQVar12->fields)._tail = iVar15;
          piVar21 = &(pQVar12->fields)._size;
          *piVar21 = *piVar21 + 1;
          piVar21 = &(pQVar12->fields)._version;
          *piVar21 = *piVar21 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void DrawString(GameCoinStringRenderer+PriceTagString) */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_DrawString
               (GameCoinStringRenderer *this,GameCoinStringRenderer_PriceTagString *s,
               MethodInfo *method)

{
  this_00 = (this->fields).stringMaterial;
  if (this_00 == (Material *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetPass(this_00,0,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
code_?:
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
  }
  else {
    pcRam_? = pcVar1;
    (*pcRam_?)(1);
    fVar3 = (s->color).r;
    fVar4 = (s->color).g;
    uVar5 = (s->color).b;
    uVar6 = (s->color).a;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0))
    goto code_?;
    pcRam_? = pcVar1;
    (*pcRam_?)(CONCAT44(fVar3,fVar3),fVar4,uVar5,uVar6);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
              ((s->start).x,(s->start).y,(s->start).z,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::GL::GL_Vertex3
              ((s->end).x,(s->end).y,(s->end).z,(MethodInfo *)0x0);
    pcVar1 = pcRam_?;
    if ((pcRam_? != (code *)0x0) ||
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 != (code *)0x0)) {
      pcRam_? = pcVar1;
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&UNK_?);
  FUN_?(uVar2,0);
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnPostRender() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_OnPostRender
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (this->fields).strings;
  while (pQVar1 != (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) {
    if ((pQVar1->fields)._size < 1) {
      return;
    }
    pQVar1 = (this->fields).strings;
    if (pQVar1 == (Queue_1_GameCoinStringRenderer_PriceTagString_ *)0x0) break;
    if ((pQVar1->fields)._size == 0) {
      uVar2 = func_?(MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Dequeue__
                                  ->klass->rgctx_data,0xb);
      FUN_?(pQVar1,uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar4 = (pQVar1->fields)._array;
    if (pGVar4 == (GameCoinStringRenderer_PriceTagString__Array *)0x0) break;
    uVar5 = (pQVar1->fields)._head;
    if ((uint)pGVar4->max_length <= uVar5) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pGVar6 = pGVar4->vector + (int)uVar5;
    GStack_7.start.x = (pGVar6->start).x;
    GStack_7.start.y = (pGVar6->start).y;
    GStack_7._8_8_ = *(undefined8 *)&(pGVar6->start).z;
    pVVar8 = &pGVar4->vector[(int)uVar5].end;
    GStack_7.end.y = pVVar8->y;
    GStack_7.end.z = pVVar8->z;
    GStack_7.color.r = pVVar8[1].x;
    GStack_7.color.g = pVVar8[1].y;
    GStack_7.color.b = pGVar4->vector[(int)uVar5].color.b;
    GStack_7.color.a = pGVar4->vector[(int)uVar5].color.a;
    iVar9 = (pQVar1->fields)._head + 1;
    iVar10 = 0;
    if (iVar9 != (int)((pQVar1->fields)._array)->max_length) {
      iVar10 = iVar9;
    }
    (pQVar1->fields)._head = iVar10;
    piVar11 = &(pQVar1->fields)._size;
    *piVar11 = *piVar11 + -1;
    piVar11 = &(pQVar1->fields)._version;
    *piVar11 = *piVar11 + 1;
    GameCoinStringRenderer_DrawString(this,&GStack_7,(MethodInfo *)0x0);
    pQVar1 = (this->fields).strings;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer_Start
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (GameCoinStringRenderer *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}


/* GameCoinStringRenderer() */

void Assembly-CSharp.dll::GameCoinStringRenderer::GameCoinStringRenderer__ctor
               (GameCoinStringRenderer *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar1 = (Queue_1_GameCoinStringRenderer_PriceTagString_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>
                        );
  pGVar2 = (GameCoinStringRenderer_PriceTagString__Array *)
           FUN_?(MethodInfo__System__Collections__Generic__Queue<GameCoinStringRenderer::PriceTagString>__Queue__
                         ->klass->rgctx_data->rgctxDataDummy);
  iVar3 = iRam_?;
  (pQVar1->fields)._array = pGVar2;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&pQVar1->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar3 = iRam_?;
    } while (!bVar8);
  }
  (this->fields).strings = pQVar1;
  if (iVar3 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).strings >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
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
  return;
}

