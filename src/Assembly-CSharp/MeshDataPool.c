
/* Void AddColor(Color) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddColor(Color *color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pCVar2 = (pMVar1->fields).colors;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pCVar2 != (Color__Array *)0x0)) {
      uVar4 = (pMVar1->fields).colorPos;
      if ((uint)pCVar2->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      pCVar9 = pCVar2->vector + (int)uVar4;
      pCVar9->r = color->r;
      pCVar9->g = fVar6;
      pCVar9->b = fVar7;
      pCVar9->a = fVar8;
      if (cVar3 == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar10 = (pMVar1->fields).colorPos;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MeshDataPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).colorPos = iVar10 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddColorRepeated(Color, Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddColorRepeated
               (Color *color,int32_t nrOfRepetitions,MethodInfo *method)

{
  if (0 < nrOfRepetitions) {
    iVar1 = 0;
    do {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pCVar4 = (pMVar2->fields).colors;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if ((pMVar2 == (MeshDataPool *)0x0) || (pCVar4 == (Color__Array *)0x0)) goto DAT_?;
      uVar5 = (pMVar2->fields).colorPos;
      if ((uint)pCVar4->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar6 = color->g;
      fVar7 = color->b;
      fVar8 = color->a;
      bVar9 = cRam_? == '\0';
      pCVar10 = pCVar4->vector + (int)uVar5;
      pCVar10->r = color->r;
      pCVar10->g = fVar6;
      pCVar10->b = fVar7;
      pCVar10->a = fVar8;
      if (bVar9) {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) goto DAT_?;
      iVar11 = (pMVar2->fields).colorPos;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) goto DAT_?;
      iVar1 = iVar1 + 1;
      (pMVar2->fields).colorPos = iVar11 + 1;
    } while (iVar1 < nrOfRepetitions);
  }
  return;
}


/* Void AddIndex(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddIndex(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pIVar2 = (pMVar1->fields).indices;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pIVar2 != (Int32__Array *)0x0)) {
      uVar4 = (pMVar1->fields).indicesPos;
      if ((uint)pIVar2->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pIVar2->vector[(int)uVar4] = index;
      if (cVar3 == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar6 = (pMVar1->fields).indicesPos;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MeshDataPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).indicesPos = iVar6 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddUv(Vector2) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUv(Vector2 uv,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (pMVar1->fields).uvs;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pVVar2 != (Vector2__Array *)0x0)) {
      uVar4 = (pMVar1->fields).uvPos;
      if ((uint)pVVar2->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fStack_6 = uv.x;
      fStack_7 = uv.y;
      pVVar2->vector[(int)uVar4].x = fStack_6;
      pVVar2->vector[(int)uVar4].y = fStack_7;
      if (cVar3 == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar8 = (pMVar1->fields).uvPos;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MeshDataPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).uvPos = iVar8 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddUvRange(Vector2[]) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUvRange
               (Vector2__Array *uvRange,MethodInfo *method)

{
  uVar1 = 0;
  if (uvRange != (Vector2__Array *)0x0) {
    pVVar2 = uvRange->vector;
    do {
      if ((int)uvRange->max_length <= (int)uVar1) {
        return;
      }
      if ((uint)uvRange->max_length <= uVar1) {
code_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar4 = pVVar2->x;
      fVar5 = pVVar2->y;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) break;
      pVVar7 = (pMVar6->fields).uvs;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if ((pMVar6 == (MeshDataPool *)0x0) || (pVVar7 == (Vector2__Array *)0x0)) break;
      uVar8 = (pMVar6->fields).uvPos;
      if ((uint)pVVar7->max_length <= uVar8) goto code_?;
      bVar9 = cRam_? == '\0';
      pVVar7->vector[(int)uVar8].x = fVar4;
      pVVar7->vector[(int)uVar8].y = fVar5;
      if (bVar9) {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) break;
      iVar10 = (pMVar6->fields).uvPos;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) break;
      uVar1 = uVar1 + 1;
      (pMVar6->fields).uvPos = iVar10 + 1;
      pVVar2 = pVVar2 + 1;
    } while( true );
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddVertex(Vector3) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddVertex(Vector3 *vertex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (pMVar1->fields).vertices;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pVVar2 != (Vector3__Array *)0x0)) {
      uVar4 = (pMVar1->fields).vertexPos;
      if ((uint)pVVar2->max_length <= uVar4) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar6 = vertex->y;
      fVar7 = vertex->z;
      pVVar2->vector[(int)uVar4].x = vertex->x;
      pVVar2->vector[(int)uVar4].y = fVar6;
      pVVar2->vector[(int)uVar4].z = fVar7;
      if (cVar3 == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar8 = (pMVar1->fields).vertexPos;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MeshDataPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).vertexPos = iVar8 + 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddVertexRange(Vector3[]) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddVertexRange
               (Vector3__Array *vertices,MethodInfo *method)

{
  uVar1 = 0;
  if (vertices == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pVVar3 = vertices->vector;
  while( true ) {
    if ((int)vertices->max_length <= (int)uVar1) {
      return;
    }
    if ((uint)vertices->max_length <= uVar1) break;
    VStack_4.x = pVVar3->x;
    VStack_4.y = pVVar3->y;
    VStack_4.z = pVVar3->z;
    MeshDataPool_AddVertex(&VStack_4,(MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    pVVar3 = pVVar3 + 1;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Create() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Create(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (MeshDataPool *)FUN_?(TypeInfo__MeshDataPool);
  MeshDataPool__ctor(this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__MeshDataPool->static_fields->instance = this;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__MeshDataPool->static_fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MeshDataPool->static_fields->instance = (MeshDataPool *)0x0;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__MeshDataPool->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Color[] GetColors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetColors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pCVar2 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,(pMVar1->fields).colorPos);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).colors;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)sourceArray,0,(Array *)pCVar2,0,(pMVar1->fields).colorPos,
                   (MethodInfo *)0x0);
        return pCVar2;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pCVar2 = (Color__Array *)(*pcVar3)();
  return pCVar2;
}


/* Int32[] GetIndices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetIndices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pIVar2 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,(pMVar1->fields).indicesPos);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).indices;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        if (sourceArray == (Int32__Array *)0x0) {
          uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
          pAVar4 = (ArgumentNullException *)func_?(uVar3);
          pSVar5 = (String *)func_?(&StringLiteral_sourceArray);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (pAVar4,pSVar5,(MethodInfo *)0x0);
          uVar3 = func_?(&
                                      MethodInfo__System__Array__Copy_MethodInfo__System__Array__MethodInfo__System__Array__int_
                                     );
          FUN_?(pAVar4,uVar3);
          pcVar6 = (code *)swi(3);
          pIVar2 = (Int32__Array *)(*pcVar6)();
          return pIVar2;
        }
        if (pIVar2 == (Int32__Array *)0x0) {
          uVar3 = func_?(&TypeInfo__System__ArgumentNullException);
          pAVar4 = (ArgumentNullException *)func_?(uVar3);
          pSVar5 = (String *)func_?(&StringLiteral_destinationArray);
          mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                    (pAVar4,pSVar5,(MethodInfo *)0x0);
          uVar3 = func_?(&
                                      MethodInfo__System__Array__Copy_MethodInfo__System__Array__MethodInfo__System__Array__int_
                                     );
          FUN_?(pAVar4,uVar3);
          pcVar6 = (code *)swi(3);
          pIVar2 = (Int32__Array *)(*pcVar6)();
          return pIVar2;
        }
        if ((((Array__Class *)sourceArray->klass)->_1).initialized_and_no_error == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).initialized == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).enumtype == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).nullabletype == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).is_generic == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).has_references == 0 &&
            ((((Array__Class *)sourceArray->klass)->_1).init_pending == 0 &&
            (((Array__Class *)sourceArray->klass)->_1).size_init_pending == 0))))))) {
          uVar3 = FUN_?();
          FUN_?(uVar3,0);
          pcVar6 = (code *)swi(3);
          pIVar2 = (Int32__Array *)(*pcVar6)();
          return pIVar2;
        }
        if (sourceArray->bounds == (Il2CppArrayBounds *)0x0) {
          sourceIndex = 0;
        }
        else {
          sourceIndex = sourceArray->bounds->lower_bound;
        }
        if ((((Array__Class *)pIVar2->klass)->_1).initialized_and_no_error != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).initialized != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).enumtype != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).nullabletype != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).is_generic != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).has_references != 0 ||
            ((((Array__Class *)pIVar2->klass)->_1).init_pending != 0 ||
            (((Array__Class *)pIVar2->klass)->_1).size_init_pending != 0))))))) {
          if (pIVar2->bounds == (Il2CppArrayBounds *)0x0) {
            destinationIndex = 0;
          }
          else {
            destinationIndex = pIVar2->bounds->lower_bound;
          }
          mscorlib.dll::System::Array::Array_Copy_3
                    ((Array *)sourceArray,sourceIndex,(Array *)pIVar2,destinationIndex,
                     (pMVar1->fields).indicesPos,(MethodInfo *)0x0);
          return pIVar2;
        }
        uVar3 = FUN_?();
        FUN_?(uVar3,0);
        pcVar6 = (code *)swi(3);
        pIVar2 = (Int32__Array *)(*pcVar6)();
        return pIVar2;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pIVar2 = (Int32__Array *)(*pcVar6)();
  return pIVar2;
}


/* Vector2[] GetUvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetUvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,(pMVar1->fields).uvPos);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).uvs;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)sourceArray,0,(Array *)pVVar2,0,(pMVar1->fields).uvPos,(MethodInfo *)0x0
                  );
        return pVVar2;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar2 = (Vector2__Array *)(*pcVar3)();
  return pVVar2;
}


/* Vector3[] GetVertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (Vector3__Array *)
             FUN_?(TypeInfo__UnityEngine__Vector3,(pMVar1->fields).vertexPos);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).vertices;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        mscorlib.dll::System::Array::Array_Copy_3
                  ((Array *)sourceArray,0,(Array *)pVVar2,0,(pMVar1->fields).vertexPos,
                   (MethodInfo *)0x0);
        return pVVar2;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar3)();
  return pVVar2;
}


/* Void Reset() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    bVar2 = cRam_? == '\0';
    (pMVar1->fields).indicesPos = 0;
    if (bVar2) {
      FUN_?(&TypeInfo__MeshDataPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      bVar2 = cRam_? == '\0';
      (pMVar1->fields).colorPos = 0;
      if (bVar2) {
        FUN_?(&TypeInfo__MeshDataPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        bVar2 = cRam_? == '\0';
        (pMVar1->fields).uvPos = 0;
        if (bVar2) {
          FUN_?(&TypeInfo__MeshDataPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).vertexPos = 0;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MeshDataPool() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool__ctor(MeshDataPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Color);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,0xc0000);
  bVar2 = iRam_? != 0;
  (this->fields).vertices = pVVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).vertices >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pVVar7 = (Vector2__Array *)FUN_?(TypeInfo__UnityEngine__Vector2,0xc0000);
  bVar2 = iRam_? != 0;
  (this->fields).uvs = pVVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).uvs >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar8 = (Color__Array *)FUN_?(TypeInfo__UnityEngine__Color,0xc0000);
  bVar2 = iRam_? != 0;
  (this->fields).colors = pCVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).colors >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pIVar9 = (Int32__Array *)FUN_?(TypeInfo__System__Int32,0x120000);
  bVar2 = iRam_? != 0;
  (this->fields).indices = pIVar9;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).indices >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Int32 get_ColorPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_ColorPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colorPos;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Color[] get_Colors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Colors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colors;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color__Array *)(*pcVar2)();
  return pCVar3;
}


/* Int32[] get_Indices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Indices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indices;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (Int32__Array *)(*pcVar2)();
  return pIVar3;
}


/* Int32 get_IndicesPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_IndicesPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indicesPos;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_UvPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_UvPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvPos;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Vector2[] get_Uvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Uvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvs;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar2)();
  return pVVar3;
}


/* Int32 get_VertexPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_VertexPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertexPos;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Vector3[] get_Vertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Vertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertices;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar2)();
  return pVVar3;
}


/* Void set_ColorPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_ColorPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).colorPos = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_IndicesPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_IndicesPos
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).indicesPos = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_UvPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_UvPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).uvPos = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_VertexPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_VertexPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MeshDataPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).vertexPos = value;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

