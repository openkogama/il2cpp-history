
/* IAsyncResult BeginInvoke(Gizmo, Int32, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::RTG::GizmoPreDragBeginHandler::GizmoPreDragBeginHandler_BeginInvoke
          (GizmoPreDragBeginHandler *this,Gizmo *gizmo,int32_t handleId,AsyncCallback *callback,
          Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pGStack_1 = gizmo;
  uStack_2 = 0;
  uStack_3 = func_?(TypeInfo__System__Int32,&handleId);
  pIVar4 = (IAsyncResult *)func_?(this,&pGStack_1,callback,object);
  return pIVar4;
}

