
/* Void AddColor(Color) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddColor(Color color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pCVar1 = MeshDataPool_get_Colors((MethodInfo *)0x0);
  uVar2 = MeshDataPool_get_ColorPos((MethodInfo *)0x0);
  if (pCVar1 == (Color__Array *)0x0) {
    func_?();
  }
  else if (uVar2 < pCVar1->max_length) {
    pCVar3 = pCVar1->vector + uVar2;
    pCVar3->r = color.r;
    pCVar3->g = color.g;
    pCVar3->b = color.b;
    pCVar3->a = color.a;
    iVar4 = MeshDataPool_get_ColorPos((MethodInfo *)0x0);
    MeshDataPool_set_ColorPos(iVar4 + 1,(MethodInfo *)0x0);
    return;
  }
  uVar5 = func_?(0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AddIndex(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddIndex(int32_t index,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pIVar1 = MeshDataPool_get_Indices((MethodInfo *)0x0);
  uVar2 = MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
  if (pIVar1 == (Int32__Array *)0x0) {
    func_?();
  }
  else if (uVar2 < pIVar1->max_length) {
    pIVar1->vector[uVar2] = index;
    MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar3 = TypeInfo__MeshDataPool->static_fields->instance;
    if (pMVar3 != (MeshDataPool *)0x0) {
      (pMVar3->fields).indicesPos = in_stack_4;
      return;
    }
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar6 = func_?(0);
  func_?(uVar6);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddUv(Vector2) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUv(Vector2 uv,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pVVar1 = MeshDataPool_get_Uvs((MethodInfo *)0x0);
  uVar2 = MeshDataPool_get_UvPos((MethodInfo *)0x0);
  if (pVVar1 == (Vector2__Array *)0x0) {
    func_?();
  }
  else if (uVar2 < pVVar1->max_length) {
    pVVar1->vector[uVar2].x = uv.x;
    pVVar1->vector[uVar2].y = uv.y;
    iVar3 = MeshDataPool_get_UvPos((MethodInfo *)0x0);
    MeshDataPool_set_UvPos(iVar3 + 1,(MethodInfo *)0x0);
    return;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void AddUvRange(Vector2[]) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddUvRange
               (Vector2__Array *uvRange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (uvRange != (Vector2__Array *)0x0) {
    pVVar2 = uvRange->vector;
    while( true ) {
      if ((int)uvRange->max_length <= (int)uVar1) {
        return;
      }
      if (uvRange->max_length <= uVar1) break;
      uv = *pVVar2;
      if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__MeshDataPool);
      }
      MeshDataPool_AddUv(uv,(MethodInfo *)0x0);
      uVar1 = uVar1 + 1;
      pVVar2 = pVVar2 + 1;
    }
    uVar3 = func_?(0,0);
    func_?(uVar3);
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void AddVertex(Vector3) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_AddVertex(Vector3 vertex,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pVVar1 = MeshDataPool_get_Vertices((MethodInfo *)0x0);
  uVar2 = MeshDataPool_get_VertexPos((MethodInfo *)0x0);
  if (pVVar1 == (Vector3__Array *)0x0) {
    func_?();
  }
  else if (uVar2 < pVVar1->max_length) {
    pVVar1->vector[uVar2].x = vertex.x;
    pVVar1->vector[uVar2].y = vertex.y;
    pVVar1->vector[uVar2].z = vertex.z;
    iVar3 = MeshDataPool_get_VertexPos((MethodInfo *)0x0);
    MeshDataPool_set_VertexPos(iVar3 + 1,(MethodInfo *)0x0);
    return;
  }
  uVar4 = func_?(0);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Create() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Create(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (ScaleAnimationBase *)func_?(TypeInfo__MeshDataPool);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = func_?(TypeInfo__UnityEngine__Vector3,0xc0000);
  (this->fields).state = iVar1;
  fVar2 = (float)func_?(TypeInfo__UnityEngine__Vector2,0xc0000);
  (this->fields).originalScale.y = fVar2;
  pTVar3 = (Transform *)func_?(TypeInfo__UnityEngine__Color,0xc0000);
  (this->fields).target = pTVar3;
  method_00 = TypeInfo__System__Int32;
  pSVar4 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
           func_?(TypeInfo__System__Int32,0x120000);
  (this->fields).OnScaleAnimationStopped = pSVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MeshDataPool->static_fields->instance = (MeshDataPool *)this;
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  TypeInfo__MeshDataPool->static_fields->instance = (MeshDataPool *)0x0;
  return;
}


/* Color[] GetColors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetColors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  iVar1 = MeshDataPool_get_ColorPos((MethodInfo *)0x0);
  destinationArray = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,iVar1);
  sourceArray = MeshDataPool_get_Colors((MethodInfo *)0x0);
  iVar1 = MeshDataPool_get_ColorPos((MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Copy_1
            ((Array *)sourceArray,0,(Array *)destinationArray,0,iVar1,(MethodInfo *)0x0);
  return destinationArray;
}


/* Int32[] GetIndices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetIndices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  iVar1 = MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
  destinationArray = (Int32__Array *)func_?(TypeInfo__System__Int32,iVar1);
  sourceArray = MeshDataPool_get_Indices((MethodInfo *)0x0);
  iVar1 = MeshDataPool_get_IndicesPos((MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Copy
            ((Array *)sourceArray,(Array *)destinationArray,iVar1,(MethodInfo *)0x0);
  return destinationArray;
}


/* Vector2[] GetUvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetUvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  iVar1 = MeshDataPool_get_UvPos((MethodInfo *)0x0);
  destinationArray = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,iVar1);
  sourceArray = MeshDataPool_get_Uvs((MethodInfo *)0x0);
  iVar1 = MeshDataPool_get_UvPos((MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Copy_1
            ((Array *)sourceArray,0,(Array *)destinationArray,0,iVar1,(MethodInfo *)0x0);
  return destinationArray;
}


/* Vector3[] GetVertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_GetVertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  iVar1 = MeshDataPool_get_VertexPos((MethodInfo *)0x0);
  destinationArray = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,iVar1);
  sourceArray = MeshDataPool_get_Vertices((MethodInfo *)0x0);
  iVar1 = MeshDataPool_get_VertexPos((MethodInfo *)0x0);
  mscorlib.dll::System::Array::Array_Copy_1
            ((Array *)sourceArray,0,(Array *)destinationArray,0,iVar1,(MethodInfo *)0x0);
  return destinationArray;
}


/* Void Reset() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  MeshDataPool_set_IndicesPos(0,(MethodInfo *)0x0);
  MeshDataPool_set_ColorPos(0,(MethodInfo *)0x0);
  MeshDataPool_set_UvPos(0,(MethodInfo *)0x0);
  MeshDataPool_set_VertexPos(0,(MethodInfo *)0x0);
  return;
}


/* MeshDataPool() */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool__ctor(MeshDataPool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,0xc0000);
  (this->fields).vertices = pVVar1;
  pVVar2 = (Vector2__Array *)func_?(TypeInfo__UnityEngine__Vector2,0xc0000);
  (this->fields).uvs = pVVar2;
  pCVar3 = (Color__Array *)func_?(TypeInfo__UnityEngine__Color,0xc0000);
  (this->fields).colors = pCVar3;
  method_00 = TypeInfo__System__Int32;
  pIVar4 = (Int32__Array *)func_?(TypeInfo__System__Int32,0x120000);
  (this->fields).indices = pIVar4;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
  return;
}


/* Int32 get_ColorPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_ColorPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colorPos;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Color[] get_Colors() */

Color__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Colors(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).colors;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pCVar3 = (Color__Array *)(*pcVar2)();
  return pCVar3;
}


/* Int32[] get_Indices() */

Int32__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Indices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indices;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pIVar3 = (Int32__Array *)(*pcVar2)();
  return pIVar3;
}


/* Int32 get_IndicesPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_IndicesPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).indicesPos;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_UvPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_UvPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvPos;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Vector2[] get_Uvs() */

Vector2__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Uvs(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).uvs;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector2__Array *)(*pcVar2)();
  return pVVar3;
}


/* Int32 get_VertexPos() */

int32_t Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_VertexPos(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertexPos;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Vector3[] get_Vertices() */

Vector3__Array * Assembly-CSharp.dll::MeshDataPool::MeshDataPool_get_Vertices(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    return (pMVar1->fields).vertices;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3__Array *)(*pcVar2)();
  return pVVar3;
}


/* Void set_ColorPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_ColorPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).colorPos = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_IndicesPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_IndicesPos
               (int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).indicesPos = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_UvPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_UvPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).uvPos = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_VertexPos(Int32) */

void Assembly-CSharp.dll::MeshDataPool::MeshDataPool_set_VertexPos(int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MeshDataPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MeshDataPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__MeshDataPool);
  }
  pMVar1 = TypeInfo__MeshDataPool->static_fields->instance;
  if (pMVar1 != (MeshDataPool *)0x0) {
    (pMVar1->fields).vertexPos = value;
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

