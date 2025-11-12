
/* Vector4 FromVector3(Vector3, Single) */

Vector4 * Assembly-CSharp.dll::RTG::Vector4Ex::Vector4Ex_FromVector3
                    (Vector4 *__return_storage_ptr__,Vector3 *vec,float w,MethodInfo *method)

{
  __return_storage_ptr__->x = vec->x;
  __return_storage_ptr__->y = vec->y;
  __return_storage_ptr__->z = vec->z;
  __return_storage_ptr__->w = w;
  return __return_storage_ptr__;
}

