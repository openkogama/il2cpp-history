
/* Void AddColor(Color) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddColor(Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pCVar2 = (pMVar1->fields).colors;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pCVar2 != (Color__Array *)0x0)) {
      uVar4 = (pMVar1->fields).colorPos;
      if (pCVar2->max_length <= uVar4) goto code_?;
      pCVar5 = pCVar2->vector + uVar4;
      pCVar5->r = color.r;
      pCVar5->g = color.g;
      pCVar5->b = color.b;
      pCVar5->a = color.a;
      if (cVar3 == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar6 = (pMVar1->fields).colorPos;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).colorPos = iVar6 + 1;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void AddColorRepeated(Color, Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddColorRepeated
               (Color color,int32_t nrOfRepetitions,MethodInfo *method)

{
  iVar1 = 0;
  if (0 < nrOfRepetitions) {
    do {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) {
code_?:
        func_?();
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pCVar4 = (pMVar2->fields).colors;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if ((pMVar2 == (MeshDataPool *)0x0) || (pCVar4 == (Color__Array *)0x0)) goto code_?;
      uVar5 = (pMVar2->fields).colorPos;
      if (pCVar4->max_length <= uVar5) goto code_?;
      bVar6 = cRam_? == '\0';
      pCVar7 = pCVar4->vector + uVar5;
      pCVar7->r = color.r;
      pCVar7->g = color.g;
      pCVar7->b = color.b;
      pCVar7->a = color.a;
      if (bVar6) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) goto code_?;
      iVar8 = (pMVar2->fields).colorPos;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar2 == (MeshDataPool *)0x0) goto code_?;
      iVar1 = iVar1 + 1;
      (pMVar2->fields).colorPos = iVar8 + 1;
    } while (iVar1 < nrOfRepetitions);
  }
  return;
}


/* Void AddIndex(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddIndex(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pIVar2 = (pMVar1->fields).indices;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pIVar2 != (Int32__Array *)0x0)) {
      uVar4 = (pMVar1->fields).indicesPos;
      if (pIVar2->max_length <= uVar4) goto code_?;
      pIVar2->vector[uVar4] = index;
      if (cVar3 == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar5 = (pMVar1->fields).indicesPos;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).indicesPos = iVar5 + 1;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddUv(Vector2) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUv(Vector2 uv,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (pMVar1->fields).uvs;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pVVar2 != (Vector2__Array *)0x0)) {
      uVar4 = (pMVar1->fields).uvPos;
      if (pVVar2->max_length <= uVar4) goto code_?;
      pVVar2->vector[uVar4].x = uv.x;
      pVVar2->vector[uVar4].y = uv.y;
      if (cVar3 == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar5 = (pMVar1->fields).uvPos;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).uvPos = iVar5 + 1;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddUvRange(Vector2[]) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUvRange
               (Vector2__Array *uvRange,MethodInfo *method)

{
  uVar1 = 0;
  if (uvRange != (Vector2__Array *)0x0) {
    pVVar2 = uvRange->vector;
    while( true ) {
      if ((int)uvRange->max_length <= (int)uVar1) {
        return;
      }
      if (uvRange->max_length <= uVar1) break;
      fVar3 = pVVar2->x;
      fVar4 = pVVar2->y;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar5 == (MeshDataPool *)0x0) goto code_?;
      pVVar6 = (pMVar5->fields).uvs;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MeshDataPool->static_fields->instance;
      if ((pMVar5 == (MeshDataPool *)0x0) || (pVVar6 == (Vector2__Array *)0x0))
      goto code_?;
      uVar7 = (pMVar5->fields).uvPos;
      if (pVVar6->max_length <= uVar7) break;
      bVar8 = cRam_? == '\0';
      pVVar6->vector[uVar7].x = fVar3;
      pVVar6->vector[uVar7].y = fVar4;
      if (bVar8) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar5 == (MeshDataPool *)0x0) goto code_?;
      iVar9 = (pMVar5->fields).uvPos;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar5 == (MeshDataPool *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      (pMVar5->fields).uvPos = iVar9 + 1;
      pVVar2 = pVVar2 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddVertex(Vector3) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddVertex(Vector3 vertex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (pMVar1->fields).vertices;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    cVar3 = cRam_?;
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if ((pMVar1 != (MeshDataPool *)0x0) && (pVVar2 != (Vector3__Array *)0x0)) {
      uVar4 = (pMVar1->fields).vertexPos;
      if (pVVar2->max_length <= uVar4) goto code_?;
      pVVar2->vector[uVar4].x = vertex.x;
      pVVar2->vector[uVar4].y = vertex.y;
      pVVar2->vector[uVar4].z = vertex.z;
      if (cVar3 == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        iVar5 = (pMVar1->fields).vertexPos;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MeshDataPool);
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
        if (pMVar1 != (MeshDataPool *)0x0) {
          (pMVar1->fields).vertexPos = iVar5 + 1;
          return;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddVertexRange(Vector3[]) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddVertexRange
               (Vector3__Array *vertices,MethodInfo *method)

{
  uVar1 = 0;
  if (vertices != (Vector3__Array *)0x0) {
    pVVar2 = vertices->vector;
    while( true ) {
      if ((int)vertices->max_length <= (int)uVar1) {
        return;
      }
      if (vertices->max_length <= uVar1) break;
      fVar3 = pVVar2->x;
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) goto code_?;
      pVVar7 = (pMVar6->fields).vertices;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if ((pMVar6 == (MeshDataPool *)0x0) || (pVVar7 == (Vector3__Array *)0x0))
      goto code_?;
      uVar8 = (pMVar6->fields).vertexPos;
      if (pVVar7->max_length <= uVar8) break;
      bVar9 = cRam_? == '\0';
      pVVar7->vector[uVar8].x = fVar3;
      pVVar7->vector[uVar8].y = fVar4;
      pVVar7->vector[uVar8].z = fVar5;
      if (bVar9) {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) goto code_?;
      iVar10 = (pMVar6->fields).vertexPos;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar6 == (MeshDataPool *)0x0) goto code_?;
      uVar1 = uVar1 + 1;
      (pMVar6->fields).vertexPos = iVar10 + 1;
      pVVar2 = pVVar2 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Create() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Create(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  value = (MeshDataPool *)func_?(TypeInfo__MeshDataPool);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0xc0000);
  ppVVar2 = &(value->fields).vertices;
  *ppVVar2 = pVVar1;
  func_?(ppVVar2,pVVar1);
  pVVar3 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,0xc0000);
  ppVVar4 = &(value->fields).uvs;
  *ppVVar4 = pVVar3;
  func_?(ppVVar4,pVVar3);
  pCVar5 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,0xc0000);
  ppCVar6 = &(value->fields).colors;
  *ppCVar6 = pCVar5;
  func_?(ppCVar6,pCVar5);
  pIVar7 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x120000);
  ppIVar8 = &(value->fields).indices;
  *ppIVar8 = pIVar7;
  func_?(ppIVar8,pIVar7);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
  TypeInfo__MeshDataPool->static_fields->instance = value;
  func_?(TypeInfo__MeshDataPool->static_fields,value);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  TypeInfo__MeshDataPool->static_fields->instance = (MeshDataPool *)0x0;
  func_?(TypeInfo__MeshDataPool->static_fields,0);
  return;
}


/* Color[] GetColors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetColors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pCVar2 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,(pMVar1->fields).colorPos)
    ;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).colors;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
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
  func_?();
  pcVar3 = (code *)swi(3);
  pCVar2 = (Color__Array *)(*pcVar3)();
  return pCVar2;
}


/* Int32[] GetIndices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetIndices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pIVar2 = (Int32__Array *)func_?(TypeInfo__System__Int32,(pMVar1->fields).indicesPos);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).indices;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        mscorlib.dll::System::Array::Array_Copy_2
                  ((Array *)sourceArray,(Array *)pIVar2,(pMVar1->fields).indicesPos,
                   (MethodInfo *)0x0);
        return pIVar2;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pIVar2 = (Int32__Array *)(*pcVar3)();
  return pIVar2;
}


/* Vector2[] GetUvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetUvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (Vector2__Array *)
             func_?(TypeInfo__UnityEngine__Vector2,(pMVar1->fields).uvPos);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).uvs;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
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
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar2 = (Vector2__Array *)(*pcVar3)();
  return pVVar2;
}


/* Vector3[] GetVertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MeshDataPool);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    pVVar2 = (Vector3__Array *)
             func_?(TypeInfo__UnityEngine__Vector3,(pMVar1->fields).vertexPos);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MeshDataPool);
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      sourceArray = (pMVar1->fields).vertices;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MeshDataPool);
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
  func_?();
  pcVar3 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar3)();
  return pVVar2;
}


/* Void Reset() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    bVar2 = cRam_? == '\0';
    (pMVar1->fields).indicesPos = 0;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar1 != (MeshDataPool *)0x0) {
      bVar2 = cRam_? == '\0';
      (pMVar1->fields).colorPos = 0;
      if (bVar2) {
        func_?();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
      if (pMVar1 != (MeshDataPool *)0x0) {
        bVar2 = cRam_? == '\0';
        (pMVar1->fields).uvPos = 0;
        if (bVar2) {
          func_?();
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
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MeshDataPool() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool__ctor(MeshDataPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Color);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Vector2);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0xc0000);
  ppVVar2 = &(this->fields).vertices;
  *ppVVar2 = pVVar1;
  func_?(ppVVar2,pVVar1);
  pVVar3 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,0xc0000);
  ppVVar4 = &(this->fields).uvs;
  *ppVVar4 = pVVar3;
  func_?(ppVVar4,pVVar3);
  pCVar5 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,0xc0000);
  ppCVar6 = &(this->fields).colors;
  *ppCVar6 = pCVar5;
  func_?(ppCVar6,pCVar5);
  pIVar7 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x120000);
  ppIVar8 = &(this->fields).indices;
  *ppIVar8 = pIVar7;
  func_?(ppIVar8,pIVar7);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  return;
}


/* Int32 get_ColorPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_ColorPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colorPos;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Color[] get_Colors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Colors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colors;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pCVar5 = (Color__Array *)(*pcVar4)();
  return pCVar5;
}


/* Int32[] get_Indices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Indices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indices;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pIVar5 = (Int32__Array *)(*pcVar4)();
  return pIVar5;
}


/* Int32 get_IndicesPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_IndicesPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indicesPos;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Int32 get_UvPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_UvPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvPos;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Vector2[] get_Uvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Uvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvs;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector2__Array *)(*pcVar4)();
  return pVVar5;
}


/* Int32 get_VertexPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_VertexPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertexPos;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Vector3[] get_Vertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Vertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertices;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3__Array *)(*pcVar4)();
  return pVVar5;
}


/* Void set_ColorPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_ColorPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MeshDataPool;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar2 != (MeshDataPool *)0x0) {
    (pMVar2->fields).colorPos = value;
    return;
  }
  ppMStack_1 = (MeshDataPool__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_IndicesPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_IndicesPos
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MeshDataPool;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar2 != (MeshDataPool *)0x0) {
    (pMVar2->fields).indicesPos = value;
    return;
  }
  ppMStack_1 = (MeshDataPool__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_UvPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_UvPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MeshDataPool;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar2 != (MeshDataPool *)0x0) {
    (pMVar2->fields).uvPos = value;
    return;
  }
  ppMStack_1 = (MeshDataPool__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_VertexPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_VertexPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppMStack_1 = &TypeInfo__MeshDataPool;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar2 != (MeshDataPool *)0x0) {
    (pMVar2->fields).vertexPos = value;
    return;
  }
  ppMStack_1 = (MeshDataPool__Class **)&stack0xfffffffc;
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

