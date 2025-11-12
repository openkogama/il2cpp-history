
/* Void Update() */

void Assembly-CSharp-firstpass.dll::MeshContainer::MeshContainer_Update
               (MeshContainer *this,MethodInfo *method)

{
  pMVar1 = (this->fields).mesh;
  pVVar2 = (this->fields).vertices;
  if (pMVar1 != (Mesh *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    valuesArrayLength_00 = 0;
    valuesArrayLength = valuesArrayLength_00;
    if (pVVar2 != (Vector3__Array *)0x0) {
      valuesArrayLength =
           mscorlib.dll::System::Array::Array_get_Length((Array *)pVVar2,(MethodInfo *)0x0);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
              (pMVar1,VertexAttribute__Enum_Position,VertexAttributeFormat__Enum_Float32,3,
               (Array *)pVVar2,valuesArrayLength,0,valuesArrayLength,MeshUpdateFlags__Enum_Default,
               (MethodInfo *)0x0);
    pMVar1 = (this->fields).mesh;
    pVVar2 = (this->fields).normals;
    if (pMVar1 != (Mesh *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void_MethodInfo__UnityEngine__Mesh__SetArrayForChannel<UnityEngine::Vector3>_UnityEngine__Rendering__VertexAttribute__UnityEngine__Vector3_____UnityEngine__Rendering__MeshUpdateFlags_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pVVar2 != (Vector3__Array *)0x0) {
        valuesArrayLength_00 =
             mscorlib.dll::System::Array::Array_get_Length((Array *)pVVar2,(MethodInfo *)0x0);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetSizedArrayForChannel
                (pMVar1,VertexAttribute__Enum_Normal,VertexAttributeFormat__Enum_Float32,3,
                 (Array *)pVVar2,valuesArrayLength_00,0,valuesArrayLength_00,
                 MeshUpdateFlags__Enum_Default,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MeshContainer(Mesh) */

void Assembly-CSharp-firstpass.dll::MeshContainer::MeshContainer__ctor
               (MeshContainer *this,Mesh *m,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).mesh = m;
  pMVar2 = this;
  pMVar3 = m;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    pMVar3 = (Mesh *)(lVar5 + 0xADDR);
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      pMVar2 = (MeshContainer *)(uVar6 | 1L << (longlong)method);
      LOCK();
      bVar1 = uVar6 == *(ulonglong *)(lVar5 + 0xADDR);
      if (bVar1) {
        *(ulonglong *)(lVar5 + 0xADDR) = (ulonglong)pMVar2;
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (m == (Mesh *)0x0) {
    FUN_?(pMVar2,pMVar3,method);
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_vertices(m,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).vertices = pVVar8;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).vertices >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar9 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_normals(m,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).normals = pVVar8;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&(this->fields).normals >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar9 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

