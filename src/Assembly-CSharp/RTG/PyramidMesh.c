
/* Mesh CreatePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreatePyramid
                 (Vector3 baseCenter,float baseWidth,float baseDepth,float height,Color color,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (float)((uint)baseWidth & _UNK_?);
  if ((float)((uint)baseWidth & _UNK_?) <= _UNK_?) {
    fVar1 = _UNK_?;
  }
  fVar2 = (float)((uint)baseDepth & _UNK_?);
  if ((float)((uint)baseDepth & _UNK_?) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  height = (float)((uint)height & _UNK_?);
  if (height <= _UNK_?) {
    height = _UNK_?;
  }
  fVar1 = fVar1 * _UNK_?;
  fVar2 = fVar2 * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  uVar6 = CONCAT44(baseCenter.y + height * (float)uVar5,baseCenter.x + height * (float)uVar4);
  fVar7 = baseCenter.z + height * (pVVar3->upVector).z;
  value_00 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0x10);
  if (value_00 != (Vector3__Array *)0x0) {
    if (value_00->max_length == 0) goto code_?;
    value_00->vector[0].x = (float)(int)uVar6;
    value_00->vector[0].y = (float)(int)((ulonglong)uVar6 >> 0x20);
    value_00->vector[0].z = fVar7;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar3->rightVector).x;
    uVar9 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar3->forwardVector).x;
    uVar12 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 2) goto code_?;
    value_00->vector[1].x = (baseCenter.x + (float)uVar8 * fVar1) - (float)uVar11 * fVar2;
    value_00->vector[1].y = (baseCenter.y + (float)uVar9 * fVar1) - (float)uVar12 * fVar2;
    value_00->vector[1].z = (baseCenter.z + fVar10 * fVar1) - fVar13 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar14 = (pVVar3->rightVector).x;
    uVar15 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar16 = (pVVar3->forwardVector).x;
    uVar17 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 3) goto code_?;
    value_00->vector[2].x = (baseCenter.x - (float)uVar14 * fVar1) - (float)uVar16 * fVar2;
    value_00->vector[2].y = (baseCenter.y - (float)uVar15 * fVar1) - (float)uVar17 * fVar2;
    value_00->vector[2].z = (baseCenter.z - fVar10 * fVar1) - fVar13 * fVar2;
    if (value_00->max_length < 4) goto code_?;
    value_00->vector[3].x = (float)(int)uVar6;
    value_00->vector[3].y = (float)(int)((ulonglong)uVar6 >> 0x20);
    value_00->vector[3].z = fVar7;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar18 = (pVVar3->rightVector).x;
    uVar19 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20 = (pVVar3->forwardVector).x;
    uVar21 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 5) goto code_?;
    value_00->vector[4].x = (float)uVar20 * fVar2 + baseCenter.x + (float)uVar18 * fVar1;
    value_00->vector[4].y = (float)uVar21 * fVar2 + baseCenter.y + (float)uVar19 * fVar1;
    value_00->vector[4].z = fVar13 * fVar2 + baseCenter.z + fVar10 * fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar22 = (pVVar3->rightVector).x;
    uVar23 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24 = (pVVar3->forwardVector).x;
    uVar25 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 6) goto code_?;
    value_00->vector[5].x = (baseCenter.x + (float)uVar22 * fVar1) - (float)uVar24 * fVar2;
    value_00->vector[5].y = (baseCenter.y + (float)uVar23 * fVar1) - (float)uVar25 * fVar2;
    value_00->vector[5].z = (baseCenter.z + fVar10 * fVar1) - fVar13 * fVar2;
    if (value_00->max_length < 7) goto code_?;
    value_00->vector[6].x = (float)(int)uVar6;
    value_00->vector[6].y = (float)(int)((ulonglong)uVar6 >> 0x20);
    value_00->vector[6].z = fVar7;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar26 = (pVVar3->rightVector).x;
    uVar27 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar28 = (pVVar3->forwardVector).x;
    uVar29 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 8) goto code_?;
    value_00->vector[7].x = (float)uVar28 * fVar2 + (baseCenter.x - (float)uVar26 * fVar1);
    value_00->vector[7].y = (float)uVar29 * fVar2 + (baseCenter.y - (float)uVar27 * fVar1);
    value_00->vector[7].z = fVar13 * fVar2 + (baseCenter.z - fVar10 * fVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar3->rightVector).x;
    uVar31 = (pVVar3->rightVector).y;
    fVar10 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar32 = (pVVar3->forwardVector).x;
    uVar33 = (pVVar3->forwardVector).y;
    fVar13 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 9) goto code_?;
    value_00->vector[8].x = (float)uVar32 * fVar2 + baseCenter.x + (float)uVar30 * fVar1;
    value_00->vector[8].y = (float)uVar33 * fVar2 + baseCenter.y + (float)uVar31 * fVar1;
    value_00->vector[8].z = fVar13 * fVar2 + baseCenter.z + fVar10 * fVar1;
    if (value_00->max_length < 10) goto code_?;
    value_00->vector[9].x = (float)(int)uVar6;
    value_00->vector[9].y = (float)(int)((ulonglong)uVar6 >> 0x20);
    value_00->vector[9].z = fVar7;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34 = (pVVar3->rightVector).x;
    uVar35 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar36 = (pVVar3->forwardVector).x;
    uVar37 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xb) goto code_?;
    value_00->vector[10].x = (baseCenter.x - (float)uVar34 * fVar1) - (float)uVar36 * fVar2;
    value_00->vector[10].y = (baseCenter.y - (float)uVar35 * fVar1) - (float)uVar37 * fVar2;
    value_00->vector[10].z = (baseCenter.z - fVar7 * fVar1) - fVar10 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar38 = (pVVar3->rightVector).x;
    uVar39 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar40 = (pVVar3->forwardVector).x;
    uVar41 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xc) goto code_?;
    value_00->vector[0xb].x = (float)uVar40 * fVar2 + (baseCenter.x - (float)uVar38 * fVar1);
    value_00->vector[0xb].y = (float)uVar41 * fVar2 + (baseCenter.y - (float)uVar39 * fVar1);
    value_00->vector[0xb].z = fVar10 * fVar2 + (baseCenter.z - fVar7 * fVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar42 = (pVVar3->rightVector).x;
    uVar43 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar44 = (pVVar3->forwardVector).x;
    uVar45 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xd) goto code_?;
    value_00->vector[0xc].x = (baseCenter.x - (float)uVar42 * fVar1) - (float)uVar44 * fVar2;
    value_00->vector[0xc].y = (baseCenter.y - (float)uVar43 * fVar1) - (float)uVar45 * fVar2;
    value_00->vector[0xc].z = (baseCenter.z - fVar7 * fVar1) - fVar10 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar46 = (pVVar3->rightVector).x;
    uVar47 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar48 = (pVVar3->forwardVector).x;
    uVar49 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xe) goto code_?;
    value_00->vector[0xd].x = (baseCenter.x + (float)uVar46 * fVar1) - (float)uVar48 * fVar2;
    value_00->vector[0xd].y = (baseCenter.y + (float)uVar47 * fVar1) - (float)uVar49 * fVar2;
    value_00->vector[0xd].z = (baseCenter.z + fVar7 * fVar1) - fVar10 * fVar2;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar50 = (pVVar3->rightVector).x;
    uVar51 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar52 = (pVVar3->forwardVector).x;
    uVar53 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0xf) goto code_?;
    value_00->vector[0xe].x = (float)uVar52 * fVar2 + baseCenter.x + (float)uVar50 * fVar1;
    value_00->vector[0xe].y = (float)uVar53 * fVar2 + baseCenter.y + (float)uVar51 * fVar1;
    value_00->vector[0xe].z = fVar10 * fVar2 + baseCenter.z + fVar7 * fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar54 = (pVVar3->rightVector).x;
    uVar55 = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar56 = (pVVar3->forwardVector).x;
    uVar57 = (pVVar3->forwardVector).y;
    fVar10 = (pVVar3->forwardVector).z;
    if (value_00->max_length < 0x10) goto code_?;
    value_00->vector[0xf].x = (float)uVar56 * fVar2 + (baseCenter.x - (float)uVar54 * fVar1);
    value_00->vector[0xf].y = (float)uVar57 * fVar2 + (baseCenter.y - (float)uVar55 * fVar1);
    value_00->vector[0xf].z = fVar10 * fVar2 + (baseCenter.z - fVar7 * fVar1);
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0x12);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)indices,
               _E9736DAA7037513F7F61DFE841C03AB9CA0D4A52E37776FD5DC4ED9E2E9C5858_Field,
               (MethodInfo *)0x0);
    value_01 = (Vector3__Array *)
               func_?(TypeInfo__UnityEngine__Vector3,value_00->max_length);
    baseCenter.z = 2.8026e-45;
    baseDepth = (float)(indices->vector + 1);
    do {
      if (indices == (Int32__Array *)0x0) goto code_?;
      if (((indices->max_length <= (int)baseCenter.z - 2U) ||
          (indices->max_length <= (int)baseCenter.z - 1U)) ||
         (indices->max_length <= (uint)baseCenter.z)) goto code_?;
      uVar58 = *(uint *)((int)baseDepth + 4);
      uVar59 = *(uint *)baseDepth;
      if (value_00->max_length <= uVar59) goto code_?;
      uVar60 = *(uint *)((int)baseDepth + -4);
      if (value_00->max_length <= uVar60) goto code_?;
      uVar61 = value_00->vector[uVar60].x;
      uVar62 = value_00->vector[uVar60].y;
      uVar63 = value_00->vector[uVar59].x;
      uVar64 = value_00->vector[uVar59].y;
      fVar1 = value_00->vector[uVar59].z - value_00->vector[uVar60].z;
      if (value_00->max_length <= uVar58) goto code_?;
      uVar65 = value_00->vector[uVar60].x;
      uVar66 = value_00->vector[uVar60].y;
      uVar67 = value_00->vector[uVar58].x;
      uVar68 = value_00->vector[uVar58].y;
      fVar2 = value_00->vector[uVar58].z - value_00->vector[uVar60].z;
      value.y = ((float)uVar67 - (float)uVar65) * fVar1 - fVar2 * ((float)uVar63 - (float)uVar61);
      value.x = fVar2 * ((float)uVar64 - (float)uVar62) - ((float)uVar68 - (float)uVar66) * fVar1;
      value.z = ((float)uVar68 - (float)uVar66) * ((float)uVar63 - (float)uVar61) -
                ((float)uVar67 - (float)uVar65) * ((float)uVar64 - (float)uVar62);
      pVVar69 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffa0,value,(MethodInfo *)0x0);
      uVar70 = pVVar69->x;
      uVar71 = pVVar69->y;
      fVar1 = pVVar69->z;
      if (value_01 == (Vector3__Array *)0x0) goto code_?;
      if (value_01->max_length <= uVar60) goto code_?;
      value_01->vector[uVar60].x = (float)uVar70;
      value_01->vector[uVar60].y = (float)uVar71;
      value_01->vector[uVar60].z = fVar1;
      if (value_01->max_length <= uVar59) goto code_?;
      value_01->vector[uVar59].x = (float)uVar70;
      value_01->vector[uVar59].y = (float)uVar71;
      value_01->vector[uVar59].z = fVar1;
      if (value_01->max_length <= uVar58) goto code_?;
      baseDepth = (float)((int)baseDepth + 0xc);
      value_01->vector[uVar58].x = (float)uVar70;
      value_01->vector[uVar58].y = (float)uVar71;
      value_01->vector[uVar58].z = fVar1;
      baseCenter.z = (float)((int)baseCenter.z + 3);
    } while ((int)baseCenter.z < 0xe);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar59 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar72 = (pVVar3->upVector).x;
    uVar73 = (pVVar3->upVector).y;
    uVar60 = uVar73 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar1 = (float)((uint)(pVVar3->upVector).z ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    uVar58 = value_01->max_length;
    if (uVar58 <= uVar58 - 4) goto code_?;
    value_01->vector[uVar58 - 4].x =
         (float)(uVar72 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    value_01->vector[uVar58 - 4].y = (float)uVar60;
    value_01->vector[uVar58 - 4].z = fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      uVar59 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar74 = (pVVar3->upVector).x;
    uVar75 = (pVVar3->upVector).y;
    fVar1 = (pVVar3->upVector).z;
    uVar58 = value_01->max_length;
    if (uVar58 <= uVar58 - 3) goto code_?;
    value_01->vector[uVar58 - 3].x = (float)(uVar74 ^ uVar59);
    value_01->vector[uVar58 - 3].y = (float)(uVar75 ^ uVar59);
    value_01->vector[uVar58 - 3].z = (float)((uint)fVar1 ^ uVar59);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      uVar59 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar76 = (pVVar3->upVector).x;
    uVar77 = (pVVar3->upVector).y;
    fVar1 = (pVVar3->upVector).z;
    uVar58 = value_01->max_length;
    if (uVar58 <= uVar58 - 2) goto code_?;
    value_01->vector[uVar58 - 2].x = (float)(uVar76 ^ uVar59);
    value_01->vector[uVar58 - 2].y = (float)(uVar77 ^ uVar59);
    value_01->vector[uVar58 - 2].z = (float)((uint)fVar1 ^ uVar59);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
      uVar59 = __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar78 = (pVVar3->upVector).x;
    uVar79 = (pVVar3->upVector).y;
    fVar1 = (pVVar3->upVector).z;
    uVar58 = value_01->max_length;
    if (uVar58 <= uVar58 - 1) goto code_?;
    value_01->vector[uVar58 - 1].x = (float)(uVar78 ^ uVar59);
    value_01->vector[uVar58 - 1].y = (float)(uVar79 ^ uVar59);
    value_01->vector[uVar58 - 1].z = (float)((uint)fVar1 ^ uVar59);
    pMVar80 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar80,(MethodInfo *)0x0);
    if (pMVar80 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar80,value_00,(MethodInfo *)0x0);
      value_02 = ColorEx::ColorEx_GetFilledColorArray(value_00->max_length,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar80,value_02,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_normals
                (pMVar80,value_01,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar80,indices,MeshTopology__Enum_Triangles,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                (pMVar80,0,(MethodInfo *)0x0);
      return pMVar80;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar81 = (code *)swi(3);
  pMVar80 = (Mesh *)(*pcVar81)();
  return pMVar80;
}


/* Mesh CreateWirePyramid(Vector3, Single, Single, Single, Color) */

Mesh * Assembly-CSharp.dll::RTG::PyramidMesh::PyramidMesh_CreateWirePyramid
                 (Vector3 baseCenter,float baseWidth,float baseDepth,float height,Color color,
                 MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__UnityEngine__Mesh);
    func_?(&_17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar1 = (float)((uint)baseWidth & _UNK_?);
  if ((float)((uint)baseWidth & _UNK_?) <= _UNK_?) {
    fVar1 = _UNK_?;
  }
  fVar2 = (float)((uint)height & _UNK_?);
  if ((float)((uint)height & _UNK_?) <= _UNK_?) {
    fVar2 = _UNK_?;
  }
  fVar1 = fVar1 * _UNK_?;
  fVar3 = (float)((uint)baseDepth & _UNK_?);
  if ((float)((uint)baseDepth & _UNK_?) <= _UNK_?) {
    fVar3 = _UNK_?;
  }
  fVar3 = fVar3 * _UNK_?;
  value = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,5);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5 = (pVVar4->rightVector).x;
  uVar6 = (pVVar4->rightVector).y;
  fVar7 = (pVVar4->rightVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar8 = (pVVar4->forwardVector).x;
  uVar9 = (pVVar4->forwardVector).y;
  fVar10 = (pVVar4->forwardVector).z;
  if (value != (Vector3__Array *)0x0) {
    if (value->max_length == 0) goto code_?;
    value->vector[0].x = (baseCenter.x - (float)uVar5 * fVar1) - (float)uVar8 * fVar3;
    value->vector[0].y = (baseCenter.y - (float)uVar6 * fVar1) - (float)uVar9 * fVar3;
    value->vector[0].z = (baseCenter.z - fVar7 * fVar1) - fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar11 = (pVVar4->rightVector).x;
    uVar12 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13 = (pVVar4->forwardVector).x;
    uVar14 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 2) goto code_?;
    value->vector[1].x = (baseCenter.x + (float)uVar11 * fVar1) - (float)uVar13 * fVar3;
    value->vector[1].y = (baseCenter.y + (float)uVar12 * fVar1) - (float)uVar14 * fVar3;
    value->vector[1].z = (baseCenter.z + fVar7 * fVar1) - fVar10 * fVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->rightVector).x;
    uVar16 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17 = (pVVar4->forwardVector).x;
    uVar18 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 3) goto code_?;
    value->vector[2].x = (float)uVar17 * fVar3 + baseCenter.x + (float)uVar15 * fVar1;
    value->vector[2].y = (float)uVar18 * fVar3 + baseCenter.y + (float)uVar16 * fVar1;
    value->vector[2].z = fVar10 * fVar3 + baseCenter.z + fVar7 * fVar1;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19 = (pVVar4->rightVector).x;
    uVar20 = (pVVar4->rightVector).y;
    fVar7 = (pVVar4->rightVector).z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar21 = (pVVar4->forwardVector).x;
    uVar22 = (pVVar4->forwardVector).y;
    fVar10 = (pVVar4->forwardVector).z;
    if (value->max_length < 4) goto code_?;
    value->vector[3].x = (float)uVar21 * fVar3 + (baseCenter.x - (float)uVar19 * fVar1);
    value->vector[3].y = (float)uVar22 * fVar3 + (baseCenter.y - (float)uVar20 * fVar1);
    value->vector[3].z = fVar10 * fVar3 + (baseCenter.z - fVar7 * fVar1);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar23 = (pVVar4->upVector).x;
    uVar24 = (pVVar4->upVector).y;
    fVar1 = (pVVar4->upVector).z;
    if (value->max_length < 5) goto code_?;
    value->vector[4].x = baseCenter.x + (float)uVar23 * fVar2;
    value->vector[4].y = baseCenter.y + (float)uVar24 * fVar2;
    value->vector[4].z = baseCenter.z + fVar1 * fVar2;
    indices = (Int32__Array *)func_?(TypeInfo__System__Int32,0x10);
    mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
    RuntimeHelpers_InitializeArray_1
              ((Array *)indices,
               __17E1E703EDA761039900D6BB1C5192E9763DE7DC9EB806A138CBA99BD3244931_Field,
               (MethodInfo *)0x0);
    pMVar25 = (Mesh *)func_?(TypeInfo__UnityEngine__Mesh);
    UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh__ctor(pMVar25,(MethodInfo *)0x0);
    if (pMVar25 != (Mesh *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_vertices
                (pMVar25,value,(MethodInfo *)0x0);
      value_00 = ColorEx::ColorEx_GetFilledColorArray(value->max_length,color,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_set_colors
                (pMVar25,value_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_SetIndices
                (pMVar25,indices,MeshTopology__Enum_Lines,0,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_UploadMeshData
                (pMVar25,0,(MethodInfo *)0x0);
      return pMVar25;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar26 = (code *)swi(3);
  pMVar25 = (Mesh *)(*pcVar26)();
  return pMVar25;
}

